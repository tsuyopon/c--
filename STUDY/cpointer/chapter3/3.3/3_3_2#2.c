//
// typedef�����Ѥ����ؿ��ݥ������
//
#include<stdio.h>

// �ؿ��ݥ��󥿤�typedef������������ɤ����ʲ��Τ褦�����Ѥ���ޤ���
// �̾��typedef�Ȥϰۤʤ�ΤǸ�򤷤ʤ��褦�ˤ��ޤ��礦���㤨��typedef int size_t �ߤ������֤������Ȥ������㤦��ǰ�Ǥ����̾��typedef�Ȥϰۤʤ�ΤǸ�򤷤ʤ��褦�ˤ��ޤ��礦��
// int (*funcptr)(int)��(*funcptr)(int)�Ȥ����ؿ��ݥ��󥿤�int��������ͤ��֤��Ȥ������Ȥ��̣���Ƥ��ޤ���
// int (*funcptr)(int)��(*funcptr)(int)�Ȥ����ؿ��ݥ��󥿤�int��������ͤ��֤��Ȥ������Ȥ��̣���Ƥ��ޤ���
typedef int (*funcptr)(int);

int square(int num){
	return num*num;
}

int main(){

	funcptr fptr1;
	fptr1 = square;
	int n = 5;
	printf("%d squared is %d\n", n, fptr1(n));

	return 0;
}
