/*
 * ���ޥ�ɥ饤��夫��������������ץ����
 */
#include<stdio.h>

// char **argv��char *argv[]�������Ǥ���
int main(int argc, char** argv){
	int i;
	for(i=0; i<argc; i++){
		printf("argv[%d] %s\n", i, argv[i]);
	}
}
