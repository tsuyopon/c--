#include<stdio.h>

int main(){

	int matrix[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

	// ������Ф���ݥ��󥿤ϼ��Τ褦��������뤳�Ȥ��Ǥ��ޤ���
	int (*pmatrix)[5] = matrix;

	int i, j;
	for(i = 0; i < 2; i++){
		// ����Υݥ��󥿤����
		printf("Address: %p\n", pmatrix[i]); 
		for(j = 0; j < 5; j++){
			// Address��ɽ����ʬ�����ܤ��뤳��
			// pmatrix[i] + j �ˤ��matrix[i][j]�����Ǥ��Ф��ƥ����������뤳�Ȥ��Ǥ��ޤ���
			printf("matrix[%d][%d] Address: %p, %p, %p Value: %d\n", i, j, pmatrix[i]+j, matrix[i]+j, &matrix[i][j], matrix[i][j]);
		}
	}
	return 0;
}
