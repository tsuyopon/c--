//
// Ϣ³����¿��������Υ����������ˡ
//
#include<stdio.h>
#include<stdlib.h>

int main(){
	int rows = 2;
	int columns = 5;
	int i, j;

	// Ϣ³�����ΰ�Ȥ��뤿���rows * columns�Ȥ��Ƥ��뤳�Ȥ����
	int **matrix = (int **)malloc(rows * columns * sizeof(int *));
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			// ����Ǥ����2�������󤬤��äƤ�1�������ΰ�Ȥ��ƥ��������ԤäƤ���Τǡ�����Υ���ǥå����ϻ��ѤǤ��ޤ���Τ�
			// �ʲ����ͤ˼�ư�Ƿ׻��򤹤�ɬ�פ�����ޤ���
			*(matrix + (i*columns) + j) = i * columns + j;
		}
	}

	// ���Ϥ򤹤�
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			printf("%d\t", *(matrix + (i*columns) + j ));
		}
		printf("\n");
	}

}
