#include<stdio.h>
#include<stdlib.h>

int main(){

	// �ʲ������20(5*4)�Х��ȤΥ��������Ԥ������Ƥ�0�ǥ��ꥢ���ޤ���
	// calloc�ؿ��ϥ�����������ƤΥ��ꥢ��Ԥ��ؿ��Ǥ���
	int *pi = (int*)calloc(5, sizeof(int));
	free(pi);

	// �ʤ���malloc�ؿ���memset�ؿ����Ȥ߹�碌�뤳�Ȥ�calloc��Ʊ��Τ��Ȥ�¸����뤳�Ȥ��Ǥ��ޤ���
	// int *pi = malloc(5*sizeof(int));
	// memset(pi, 0, 5*sizeof(int));
}
