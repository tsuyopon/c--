//
// �ؿ��ݥ��󥿤Υ��㥹�Ȥ����Ѥ��Ƥߤޤ���
// �����С����ɤ����Ѥ��Ƥ���Τ�C++��g++�ǥ���ѥ��뤬ɬ�פǤ���
// 
#include<stdio.h>

typedef int (*fptrToSingleInt)(int);
typedef int (*fptrToTwoInts)(int, int);

int add(int num1){
	return num1;
}

int add(int num1, int num2){
	return num1 + num2;
}

int main(){

	fptrToTwoInts fptrFirst = add;
	printf("fptrToTwoInts: %d\n", fptrFirst(5, 6));
	fptrToSingleInt fptrSecond = (fptrToSingleInt)fptrFirst;
	fptrFirst = (fptrToTwoInts)fptrSecond;
	printf("fptrToTwoInts: %d\n", fptrFirst(5, 6));
	return 0;
}
