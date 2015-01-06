#include<stdio.h>
#include<stdlib.h>

// ���ѼԤ��ݥ��󥿤Υ��ɥ쥹����Ф��ƥ��㥹�Ȥ�����ô��ڸ����뤿��Υޥ���
#define safeFree(p) safeFree2((void**)&(p))

// �ȼ���free�ؿ������������ˡ
void safeFree2(void **pp){

	// *pp�ϥ��ɥ쥹��ɽ���Ƥ��ޤ���
	if(pp != NULL && *pp != NULL){
		free(*pp);
		*pp = NULL;   // free�򤷤���NULL�򤷤Ƥ����Τ��褤�Ǥ��礦��
	}
}

int main(){
	int *pi;
	pi = (int*)malloc(sizeof(int));
	*pi = 5;
	printf("Before: %p\n", pi);
	safeFree(pi);
	printf("After: %p\n",  pi);
	safeFree(pi);
	return(EXIT_SUCCESS);
}
