#include<stdio.h>

int main(){

	// �ʲ��Σ��Ԥ򥳥��ȥ��󤹤����Ȥ����������ǥ���ѥ���򤷤Ƽ¹Է�̤���Ӥ��Ƥߤ�ȡ�num3�ν�������ͤ��ۤʤ�
	// �Ĥޤꡢ�����ͤϽ�������ʤ��ȿ��ѤǤ��ʤ��Ȥ������Ȥ�???

//	int num1;
//	int *const cpi1 = &num1;
//	printf("cpi1, num1: addr=%p, value=%d\n", cpi1, num1);

    // ��*�פϴ��ܱ黻�ҤȸƤФ�ޤ���
	int num2 = 0;
	int *const cpi2 = &num2;
	printf("cpi2, num2: addr=%p, value=%d\n", cpi2, num2);

    // ���Τ褦��cpi3�����������num3����������ޤ�
	int num3;
	int *const cpi3 = &num3;
	printf("cpi3, num3: addr=%p, value=%d\n", cpi3, num3);

}
