//
// ��Ϣ³�Ȥʤ��ǽ���Τ���¿���������������ˤĤ���
//
#include<stdio.h>
#include<stdlib.h>

int main(){

	// matrix[2][5]��2��������Υ��������ưŪ�˹Ԥ�
	int rows = 2;
	int columns = 5;
	int i, j;

	//int���Σ���������**matrix��rows��malloc�ˤ�äƳ�����Ƥ�
	int **matrix = (int **)malloc(rows*sizeof(int *));

	//int���Σ���������**matrix��columns��malloc�ˤ�äƳ�����Ƥ�
	for(i = 0; i < rows; i++){
		matrix[i] = (int *)malloc(columns*sizeof(int));
	}

	// �嵭�Τ褦�˳�����Ԥ��ȡ���Ϣ³�Ȥʤ���ꥢ�ɥ쥹�Ȥʤꤨ�뤳�Ȥ�����ޤ���
	// �ɤΤ褦�ʥ�������Ȥʤ뤫�ϡ��ҡ��ץޥ͡����㡼�Ȥ��λ��Υҡ��׾��֤˰�¸���ޤ���
	for(i = 0; i < rows; i++){
		for(j = 0; j < columns; j++){
			printf("matrix[%d][%d]=%d, Address=%p\n", i, j, matrix[i][j], &matrix[i][j]);
		}
		printf("\n");
	}
}
