// 
// �ؿ��ݥ��󥿤�������ơ����Ѥ���Ǥ⥷��ץ�ʥ���ץ�Ǥ���
//
#include<stdio.h>

// �ؿ��ݥ���������ؿ��ݥ��󥿤��ѿ�̾��fptr1�Ȥ��Ƥ��λ������������ޤ���
int (*fptr1)(int);

int square(int num){
	return num*num;
}

int twofold(int num){
	return 2*num;
}

int main(){
	int n = 5;

	// �ؿ��ݥ��󥿤����Ѥ���square�ؿ���ƤӽФ��ޤ��� &square�Ȥ��Ƥ�褤�Ǥ������Ĥ���ɬ�פϤ���ޤ���
	fptr1 = square;
	printf("%d squared is %d\n", n, fptr1(n));

	// �ؿ��ݥ��󥿤�����Ѥ���twofold�ؿ���ƤӽФ��ޤ���
	fptr1 = twofold;
	printf("%d twofold is %d\n", n, fptr1(n));
	return 0;
}
