//
// �ؿ��ݥ��󥿤�����˻��Ĵؿ��ˤĤ���
//
#include<stdio.h>

int add(int num1, int num2){
	return num1 + num2;
}

int sub(int num1, int num2){
	return num1 - num2;
}

// �ؿ��ݥ��������Ԥ��ޤ���
typedef int (*fptrOperation)(int, int);

// compute�ؿ��ϴؿ��ݥ��󥿤�����Ȥ��ƻ��äƤ��ޤ���
// typedef��ȤäƤ��������Ϥ��Υ᥽�åɤ�������ά�����Ƥ���Ƥ��ޤ���
// typedef��Ȥ�ʤ���� int compute(int (*fptrOperation)(int, int) operation, int num1, int num2) �ȤʤäƤ��ޤ�����
int compute(fptrOperation operation, int num1, int num2){
	return operation(num1, num2);
}

int main(){
	// �ؿ��ݥ��󥿤����Ѥ��뤳�Ȥˤ�ä�compute�Ȥ����ؿ����add��sub�Ȥ��ä��ؿ��νФ�ʬ����ԤäƤ��ޤ���
	printf("%d\n", compute(add, 5, 6));
	printf("%d\n", compute(sub, 5, 6));
}
