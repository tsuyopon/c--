/*
 * ���Υץ����ϥ���ѥ��뤹�뤳�ȤϤǤ��ޤ������¹Ԥ���ȥ��顼�Ȥʤ�ޤ���
 * ���Τ褦�˰����Ǥʤ������󥭥㥹�Ȥ�¹Ԥ���ȼ��Ԥ��뤳�Ȥ�����ޤ���
 */
#include<iostream>
#include<sstream>
#include<string>
#include<typeinfo>
using namespace std;

string Hoge(ostream& ostr){

	try {
		ostringstream& sstr = dynamic_cast<ostringstream&>(ostr);
		sstr.str("");
		sstr << "Hoge" <<flush;
		return sstr.str();
	} catch(const bad_cast& e){
		return "Error!";
	}
}

int main(){
	ostringstream sstr;
	cout << Hoge(sstr) << endl;  // ��������
	cout << Hoge(cout) << endl;  // ���Ԥ���
}
