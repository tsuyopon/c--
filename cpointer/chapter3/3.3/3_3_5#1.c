//
// �ؿ��ݥ��󥿤��Ǽ������������Ѥ���
// 
#include<stdio.h>

typedef int (*fptrOperation)(int, int);
typedef int (*operation)(int, int);

// �ؿ��ݥ��󥿤��Ǽ���������������Ƥ��ޤ������������Ʊ����NULL�˽��������ޤ���
operation operations[128] = {NULL};

// �嵭typedef��Ȥ�ʤ���ˡ���������Ȱʲ��Τ褦�ˤ��ޤ���
//int (*operations[128])(int, int) = {NULL};

int add(int num1, int num2){
	return num1 + num2;
}

int sub(int num1, int num2){
	return num1 - num2;
}

void initializeOperationsArray(){
	// �ؿ��ݥ��󥿤�����˳�Ǽ���Ƥ��ޤ���
	operations['+'] = add;
	operations['-'] = sub;
}

int evaluateArray(char opcode, int num1, int num2){
	fptrOperation operation;
	operation = operations[opcode];
	return operation(num1, num2);
}

int main(){
	initializeOperationsArray();
	printf("%d\n", evaluateArray('+', 5, 6));
	printf("%d\n", evaluateArray('-', 5, 6));
	return 0;
}
