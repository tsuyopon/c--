#include<stdio.h>
#include<stdlib.h>

// [����] �ݥ��󥿤�ؿ����Ϥ��ȴؿ��ؤϥݥ��󥿤��ͤ��Ϥ���뤳�Ȥˤʤ�ޤ���
// ���Τ��ᡢ���ɥ쥹���Ϥ������ΤǤ���Хݥ��󥿤Υݥ��󥿤��Ϥ��ޤ�������ˤ�ä�*arr�Ȥ����arr�Υ��ɥ쥹�ͤ�ؤ������褦�ˤʤ�ޤ���
//
// �ʲ�����Ǥ�����void�ˤ��ơ��ݥ��󥿤��ͤ�ؿ�����������Τǥݥ��󥿤Υݥ��󥿤��Ϥ��Ƥ��ޤ���
void allocateArray(int **arr, int size, int value){

	*arr = (int*)malloc(size*sizeof(int));
	if(*arr != NULL){
		int i;
		for(i = 0; i < size; i++){
			*(*arr+i) = value;
		}
	}
}

int main(){

	int i;
	int *vector = NULL;
	allocateArray(&vector, 5, 45);
	for(i = 0; i < 5; i++){
		printf("%d\n", vector[i]);
	}
	free(vector);
	return 0;
}
