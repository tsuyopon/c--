#include<iostream>
using namespace std;

int main(){
	char   c = '1';
	int    i = 2;
	double d = 3;
	void* p;         // void���ؤΥݥ������

	p = &c;
	cout << *static_cast<char*>(p) << ' ';   // void���ݥ��󥿤ϥ��㥹�Ȥ��뤳�Ȥˤ�ä�����̵��������ؤȥ��������Ǥ��ޤ���

	p = &i;
	cout << *static_cast<int*>(p) << ' ';

	p = &d;
	cout << *static_cast<double*>(p) << endl;
}
