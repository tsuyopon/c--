/*
 * �ƤӽФ��Ƥ���ץ�����6.10��Υץ����򥳥ԡ�������ΤǤ���
 */

//Copy1.cpp
#include "IntArray.h"
#include <iostream>
using namespace std;

void Show(const IntArray& array) {
	cout << array.Size() << endl;
}

int main()
{
	// ���󥹥ȥ饯�������explicit����Ϳ����Ƥ���Τǡ��ʲ�������Ū�˥��㥹�Ȥ򤷤ʤ��¤�ϥ���ѥ��륨�顼�Ȥʤ롣
	// ���ۤΥ��㥹�Ȥϻפ�̥Х��������������ǽ�������뤿��ˡ�������1�Ĥˤʤ��ǽ���Τ��륳�󥹥ȥ饯��������С�
	// ���ԡ����󥹥ȥ饯����Τ����Ƥ�explicit����Ϳ���Ƥ����Τ�̵��Ǥ���
//	Show(5);

	IntArray array(5);
	Show(array);
}

