#include<stdio.h>

int main(){

	int num1;
	int *const cpi1 = &num1;

	// ���ɥ쥹�θ������const�Ǹ���Ǥ�����������(num1)���Τ��ͤ��ѹ����뤳�ȤϤǤ��ޤ���
	num1 = 100;
	printf("cpi1_value=%d, num1_value=%d\n", *cpi1, num1);

	*cpi1 = 99;
	printf("cpi1_value=%d, num1_value=%d\n", *cpi1, num1);

}
