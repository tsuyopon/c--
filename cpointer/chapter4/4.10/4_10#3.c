//
// 4_10#2.c����ɤ��ƥ��㥰��������
//
#include<stdio.h>

int main(){

	// ��Υ��������ơ��ۤʤ른�㥰�����������ޤ���
	int (*(arr2[])) = {
		(int[]){0, 1, 2, 3},
		(int[]){4, 5},
		(int[]){6, 7, 8},
	};

	// �ƹԤϰۤʤ��ͤǹ�������Ƥ���Τ�3�Ĥ�for�롼�פ�ɬ�פǤ���
	int i, j;

	int row = 0;
	int column = 4;
	for(i = 0; i < column; i++){
		printf("layer1[%d][%d] Address: %p Value: %d\n", row, i, &arr2[row][i], arr2[row][i]);
	}
	printf("\n");

	row = 1;
	column = 2;
	for(i = 0; i < column; i++){
		printf("layer1[%d][%d] Address: %p Value: %d\n", row, i, &arr2[row][i], arr2[row][i]);
	}
	printf("\n");

	row = 2;
	column = 3;
	for(i = 0; i < column; i++){
		printf("layer1[%d][%d] Address: %p Value: %d\n", row, i, &arr2[row][i], arr2[row][i]);
	}
	printf("\n");
}
