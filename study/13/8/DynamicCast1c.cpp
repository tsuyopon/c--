#include<iostream>
#include<sstream>
#include<string>
using namespace std;

/* DynamicCast1.cpp�Ǥϻ��Ȥ�dynamic_cast���Ƥ��ޤ�����
 * ������������ξ��ˤϥݥ��󥿤�dynamic_cast���Ƥ��ޤ���
 * ���ξ��ˤϥ����󥭥㥹�Ȥ˼��Ԥ������bad_cast�㳰�ǤϤʤ������NULL�ݥ��󥿤������äƤ��ޤ���
 *
 */
string Hoge(ostream& ostr){
	ostringstream* sstr = dynamic_cast<ostringstream*>(&ostr);
	if(sstr != NULL){
		sstr->str("");
		*sstr << "Hoge" << flush;
		return sstr->str();
	} else {
		return "Error!";
	}
}

int main(){
	ostringstream sstr;
	cout << Hoge(sstr) << endl;  // ��������
	cout << Hoge(cout) << endl;  // ���Ԥ���
}
