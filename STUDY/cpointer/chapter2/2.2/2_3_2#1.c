#include<stdio.h>
#include<stdlib.h>

int main(){
	int *pi = (int*)malloc(sizeof(int));
	*pi = 5;
	free(pi);

	// ���ä����äƴ��˲�������Ƥ����Τ򣲽Ų������Ƥ��ޤä����ˤϼ¹ԥ��顼�Ȥʤ�ޤ���
	free(pi);
}
