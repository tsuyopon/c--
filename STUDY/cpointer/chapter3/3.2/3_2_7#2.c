#include<stdio.h>
#include<stdlib.h>

/* WARNING */
// ���̃v���O�����͐��������삵�܂���B


// �|�C���^�̃|�C���^�ł͂Ȃ�*arr���p�����[�^�w��ɕύX���܂����B
// arr��allocateArray()���ŃR�s�[����Ă��邾���Ȃ̂ŁAmain���ɐ��䂪�߂����ۂ�arr[n]���w�������|�C���^�����ł��Ă��܂��܂��B
void allocateArray(int *arr, int size, int value){

	arr = (int*)malloc(size*sizeof(int));
	if(arr != NULL){
		int i;
		for(i = 0; i < size; i++){
			arr[i] = value;
		}
	}
}

int main(){

	int i;
	int *vector = NULL;
	allocateArray(vector, 5, 45);
	for(i = 0; i < 5; i++){
		printf("%d\n", vector[i]);
	}
	free(vector);
	return 0;
}
