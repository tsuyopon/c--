/*
 * ���Υץ����ϥ���ѥ��뤹�뤳�ȤϤǤ��ޤ������¹Ԥ���ȥ��顼�Ȥʤ�ޤ���
 * ���Τ褦�˰����Ǥʤ������󥭥㥹�Ȥ�¹Ԥ���ȼ��Ԥ��뤳�Ȥ�����ޤ���
 */
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

string Hoge(ostream& ostr){
	ostringstream& sstr = static_cast<ostringstream&>(ostr);
	sstr.str("");
	sstr << "Hoge" << flush;
	return sstr.str();
}

int main(){
	cout << Hoge(cout) << endl;
}
