#include<stdio.h>
#include<stdlib.h>

int main(){

	// ��Ū�ѿ�
//	static int *pi = (int*)malloc(sizeof(int));

	// ����ѿ�
	static int *pi;
	pi = (int*)malloc(sizeof(int));
	free(pi);
}
