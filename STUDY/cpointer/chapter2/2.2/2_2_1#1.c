#include<stdio.h>
#include<stdlib.h>

int main(){
	int *pi = (int*)malloc(sizeof(int));

	// �׵ᤵ�줿����������Ƥ��ʤ����ˤ�NULL�ݥ��󥿤Ǥ��뤫�ɤ�����Ƚ�̤��뽬����Ĥ��ޤ��礦��
	if(pi != NULL){
		printf("Pointer is valid\n");
	} else {
		printf("Pointer is invalid\n");
	}
	free(pi);
}
