#include<stdio.h>
#include<stdlib.h>

int main(){

	// malloc������ͤϡ�void *�׷�(�Ĥޤ겿�η��Υ��ɥ쥹�ˤ��Ѵ��Ǥ���)�ʤΤ�Ŭ�ڤ�(int*)���˥��㥹�Ȥ��Ƥ�����ɬ�פ�����ޤ���
	// sizeof�黻�Ҥˤ��int���Υ������򻻽Ф��Ƥ���ΤǼ¹ԴĶ��ˤ��ư��αƶ��򵤤ˤ��뤳�Ȥ��ʤ��ʤ�ޤ���
	int *pi = (int*)malloc(sizeof(int));
	*pi = 5;
	printf("*pi: %d\n", *pi);
	free(pi);
}
