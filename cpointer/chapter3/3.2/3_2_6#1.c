#include<stdio.h>
#include<stdlib.h>

// ������int����ݥ��󥿤��Ϥ��褦�ˤ��Ƥ��ޤ���
int* allocateArray(int *arr, int size, int value){

	// malloc�ϳ����Ǥ��ʤ����ˤ�NULL���ֵѤ���Τǡ�NULL������å�����ΤϤ褤�����Ǥ���
	if(arr != NULL){
		int i;
		for(i = 0; i < size; i++){
			arr[i] = value;
		}
	}
	return arr;
}

int main(){

	int i;
	int* vector = (int*)malloc(5*sizeof(int));
	allocateArray(vector, 5, 45);
	for(i = 0; i < 5; i++){
		printf("%d\n", vector[i]);
	}
	free(vector);
	return 0;
}
