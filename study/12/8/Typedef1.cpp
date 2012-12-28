#include <iostream>
#include <sstream>
/*
 * ���Υץ����ǤϽ��Ϸ�̤�Ȥꤢ����int�ˤ��Ƥ��ޤ���
 * ������ȡ����Ϸ�̤Ȥʤ뷿���ѹ��������Ȼפä��������͡����ѹ������ФƤ����ǽ��������ޤ���
 * ���Τ褦�ʾ��������ơ�typedef��Ȥäƽ�ľ�����ץ���बTypedef1_2.cpp�ˤ���ޤ��Τǡ�ξ�ԤΥե������diff����ʤɤ��Ƴ�ǧ���ƤߤƤ���������
 */
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Calculator {
	public:
		void Run();

	private:
		bool Input();
		bool Calculate();
		void ShowResult() const;

	private:
		int m_a, m_b;
		int m_result;
		char m_op;
};

void Calculator::Run(){
	while(Input()) {
		if(Calculate()){
			ShowResult();
		}
	}
}

bool Calculator::Input(){
	istringstream isstr;
	while(true){
		string line;
		cout << "Input formula > " << flush;
		getline(cin, line);
		if(cin.fail() || line.empty()){
			return false;
		}

		isstr.clear();
		isstr.str(line);
		isstr >> m_a >> m_op >> m_b;
		if(isstr.fail()){
			continue;
		}
		isstr >> line;
		if(isstr.fail()){
			break;
		}
	}
	return true;
}

bool Calculator::Calculate(){
	switch(m_op){
		case '+': m_result = m_a + m_b; break;
		case '-': m_result = m_a + m_b; break;
		case '*': m_result = m_a + m_b; break;
		case '/':
			if(m_b == 0){
				cerr << "Could not devide by 0." << endl;
				return false;
			}
			m_result = m_a / m_b;
			break;
		default:
			cerr << "Invalid" << endl;
			return false;
	}
	return true;
}

void Calculator::ShowResult() const {
	cout << m_result << endl;
}

int main(){
	Calculator calc;
	calc.Run();
}
