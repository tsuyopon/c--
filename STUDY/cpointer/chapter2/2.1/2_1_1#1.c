#include<stdio.h>
#include<stdlib.h>

int main(){

	// chunk�ѿ��˥ҡ��פ������������Ƥ�ץ����Ǥ���free���Ƥ����ʤ��ΤǤ��äȼ¹Ԥ���ȥ���꡼���ǰ۾ｪλ���ޤ���
	char *chunk;
	while(1){
		chunk = (char*)malloc(100000000);
		printf("Allocating\n");
	}
}
