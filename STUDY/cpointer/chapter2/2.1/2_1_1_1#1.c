#include<stdio.h>
#include<stdlib.h>

int main(){

	// 1���ܤΥ��������ԤäƤ��ޤ���
	int *pi = (int*)(sizeof(int));
	*pi = 5;

	// 2���ܤΥ��������pi���ɥ쥹�˹ԤäƤ��ޤ�����������free�򤷤Ƥ��ʤ��ΤǤ��Τ褦�ʾ��ˤ�Segmentation Fault�Ȥʤ�ޤ���
	pi = (int*)malloc(sizeof(int));
}
