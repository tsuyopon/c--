#include <iostream>
using namespace std;

int main(){
	typedef const int* IntCPtr;   //int���ؤΥݥ��󥿷���Ʊ����IntPtr��������롣const����Ϳ

	int n = 0;
	int m = -1;

	IntCPtr p = &n;     // const int* p = &n
	IntCPtr q = &n;     // const int* q = &n

	// p��q�Υ��ɥ쥹���ѹ����뤳�Ȥϲ�ǽ�Ǥ���
	// �Ĥޤꡢconst int*�ϡ����ɥ쥹���ѹ������ͤ��ѹ����뤳�Ȥ�����̵���褦�Ǥ���
	p = &m;
	q = &m;
	cout << "*p = " << *p << endl;
	cout << "*q = " << *q << endl;

	// ��������p��q���ͼ��Τ��ѹ����褦�Ȥ���ȥ���ѥ��륨�顼�Ȥʤ�ޤ��� �ʲ��ιԤ򥳥��ȥ��󤷤ƻ�ƤߤƲ�������
//	*p = 1;
//	*q = 2;
//	cout << "*p = " << *p << endl;
//	cout << "*q = " << *q << endl;

}
