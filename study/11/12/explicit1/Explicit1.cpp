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
	// ����� "Show(IntArray(5))"�Ȥ����ƥ�ݥ�ꥪ�֥������Ȥκ������Ԥ�����˰���Ū�˥��㥹�Ȥ���ޤ���
	// IntArray(5)�������ɽ�����Ǥ���Τ��Ф��ơ�5�Ȥ����ͤϤ����Σ��Ĥο��ͤ�ɽ�����ˤ����ޤ���
	// �����δ֤μ�ưŪ���Ѵ��ϹԤ���٤��ǤϤ���ޤ���
	// ���Τ褦�ʾ��ˤϥ᥽�å�����ˤơ�explicit IntArray(int size);�פ��ͤ�explicit����Ϳ���ơ�����Ū���㥹�Ȥ�
	// �ػߤ���褦�ˤ��ޤ���(���Υ���ץ��explicit1_2�Υץ����ˤƤΤ��Ƥ��ޤ���)
	Show(5);
}

