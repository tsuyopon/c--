//
// �ؿ��ݥ���Ʊ�Τ���������������Ӥ��뤳�Ȥ��Ǥ��ޤ���
// 
#include<stdio.h>

typedef int (*fptrOperation)(int, int);

int add(int num1, int num2){
	return num1 + num2;
}

int main(){

	fptrOperation fptr1 = add;

	// �ʲ�����Ǥ��������Ӥ򤪤��ʤäƤ��ޤ���
	if(fptr1 == add){
		printf("fptr1 is add method\n");
	} else {
		printf("fptr1 isn't add method\n");
	}

	return 0;
}
