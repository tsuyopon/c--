//
// �������z����֐��ɓn���v���O����
//
#include<stdio.h>

// �T�C�Y�̈قȂ�s��ɉ��x���Ăяo�����ۂȂǂɗ��p�ł���֐�
void display2DArrayUnknownSize(int *arr, int rows, int cols){
	int i, j;
	for(i = 0; i < rows; i++){
		for(j = 0; j < 5; j++){
			// arr��2�����z��������|�C���^�Ƃ��Đ錾����Ă��Ȃ��̂� "arr[i][j]" �Ƃ������L�q�͂ł��܂���B
			printf("%d\t", *(arr + (i*cols) + j));
		}
		printf("\n");
	}
}

void main(){

	int matrix[2][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10}
	};

	display2DArrayUnknownSize(&matrix[0][0], 2, 5);

	// �ȉ��̂悤�ɂ��ČĂяo����incompatible pointer�̌x�����ł܂��B
	// ����́A&matrix[0][0]��int�ւ̃|�C���^�ł����Amatrix��int�z��̃|�C���^��\���Ă��邩��ł��B
	//display2DArrayUnknownSize(matrix, 2, 5);

}

