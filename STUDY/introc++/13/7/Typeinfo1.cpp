#include<iostream>
#include<fstream>
#include<sstream>
#include<typeinfo>
using namespace std;

/*
 * typeid�ϼ¹Ի��˼ºݤ��Ϥ���Ƥ������֥������Ȥ�����η�����Ǥ���
 * �¹Ի���ưŪ�������뷿����Τ��Ȥ�RTTI(Run-Time Type Information: �¹Ի�������)�Ȥ����ޤ���
 */
void ShowType(const ostream& ostr){
	cout << typeid(ostr).name() << endl;
}

int main(){
	fstream       fstr;
	ofstream      ofstr;
	stringstream  sstr;
	ostringstream osstr;

	ShowType(cout);
	ShowType(fstr);
	ShowType(ofstr);
	ShowType(sstr);
	ShowType(osstr);
}
