#include<iostream>
#include<iomanip>
#include<fstream>
#include<typeinfo>
using namespace std;

/*
 * main()�����ofstream���饹�Υ��֥������Ȥ��Ϥ���Ƥ��ޤ�����
 * �ܰ����ˤ�äơ�ostream&�פȥ��åץ��㥹�Ȥ���Ƥ��뤳�Ȥ���դ��Ƥ���������
 */
void CheckType(const ostream& ostr){
	const type_info& tiOstr       = typeid(ostr);
	const type_info& tiOstream    = typeid(ostream);
	const type_info& tiOfstream   = typeid(ofstream);
	const type_info& tiCOfstream  = typeid(const ofstream);
	const type_info& tiCROfstream = typeid(const ofstream&);

	cout << boolalpha;

	cout << "(==)" << endl
		<< "ostream        : " << (tiOstr == tiOstream)    << endl
		<< "ofstream       : " << (tiOstr == tiOfstream)   << endl
		<< "const ofstream : " << (tiOstr == tiCOfstream)  << endl
		<< "const ofstream&: " << (tiOstr == tiCROfstream) << endl;

	cout << "(!=)" << endl
		<< "ostream :         " << (tiOstr != tiOstream)    << endl
		<< "ofstream :        " << (tiOstr != tiOfstream )  << endl
		<< "const ofstream:   " << (tiOstr != tiCOfstream)  << endl
		<< "const ofstream&:: " << (tiOstr != tiCROfstream) << endl;
}

int main(){
	ofstream ofstr;
	CheckType(ofstr);
}
