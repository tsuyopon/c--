#include <iostream>
using namespace std;

int main(){
	typedef int* IntPtr;   //int���ؤΥݥ��󥿷���Ʊ����IntPtr��������롣

	int n = 0;

	// "const char*"��"char const*"�ΰ�̣�������ʤ��褦�ˡ�
	// "const IntPtr"��"IntPtr const"�ΰ�̣�⤫���ޤ���
	const IntPtr p = &n;     // const int* p = &n
	IntPtr const q = &n;     // int* const q = &n

	// �ʲ��Σ��Ԥ򥳥��ȥ��󤹤�ȥ���ѥ��륨�顼�Ȥʤ�ޤ���
//	p = &n;
//	q = &n;

	*p = 1;
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;

	*q = 2;
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;

}
