#include<stdio.h>
#include<stdlib.h>

int* allocateArray(int size, int value){
	int i;
	int* arr = (int*)malloc(size * sizeof(int));
	for(i=0; i<size; i++){
		arr[i] = value;
	}
	return arr;
}

int main(){
	int i;
	int* vector = allocateArray(5, 45);
	for(i=0; i<5; i++){
		printf("%d\n", vector[i]);
	}
	// �Ȥ�����ä�����ϲ������ޤ��礦��
	free(vector);
	return 0;
}
