#include<stdio.h>
#include<stdlib.h>

int main(){
	int *pi = (int*)malloc(sizeof(int));
	free(pi);
	pi = NULL;    // ��äƤ��Υݥ��󥿤�ȤäƤ��ޤ���ǽ��������Τ�����Ū��NULL�ˤ��Ƥ�����ˡ�����롣
}
