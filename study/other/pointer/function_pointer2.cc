#include<stdio.h>
#include<stdlib.h>

int add(int a, int b){ return a + b; }
int sub(int a, int b){ return a - b; }
int mul(int a, int b){ return a * b; }

int main(void){

	// �ؿ��ݥ��󥿤�����(�ؿ��ݥ��󥿥ơ��֥�ȸƤ�)
	// 1. (*arithFuncTable[])��*���ʡˤǰϤޤ�Ƥ���Τ�����ͤ�int�ʤΤǡ�int*�ˤʤ�ʤ��褦�ˤ��뤿��
	// 2. arithFunctable[]�ˤ�������ɽ���Ƥ��ޤ���
	// 3. arithFuncTable[]�ˤ�����*���ͤǤ��뤳�Ȥ��̣���Ƥ��ޤ����Ĥޤ�arithFuncTable[1]�ʤɤ��ؿ�̾�Ǥ���Ȥ������Ȥ��̣���Ƥ���褦�Ǥ���
	// 4. �¤�*��arithFuncTable�δ֤ˤ�const�����줿�����������⤷��ޤ���(���֤�����л�ƤߤƤ�������)
	//
	// ����������Ȥ��Ƥ� switch ~ case�ʤɤν�������ñ��ˤ��Ƥ���뤳�Ȥ��Ǥ���褦�ˤʤ�ޤ���
	int (* arithFuncTable[])(int, int) = {add, sub, mul};
	int i;

	for(i = 0; i < 3; i++){
		
		printf("%s\n", );
		printf("%d\n", arithFuncTable[i](10, 5));
	}
	return 0;
}
