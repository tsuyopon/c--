/*
 * strlen()�ʰ״ؿ����äƤߤ�
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

size_t stringLength(char* string){
	size_t length = 0;
	while( *(string++) ) {
		length++;
	}
	return length;
}

int main(){

	char simpleArray[] = "simple string";
	char *simplePtr = (char*)malloc(strlen("simple string")+1);
	strcpy(simplePtr, "simple string");

	printf("%d\n", stringLength(simplePtr));
	printf("%d\n", stringLength(&simplePtr[0]));

	// ���ξ����ȡ�char * �Ǥ���simpleArray�˥��ɥ쥹�黻�Ҥ���Ϳ���Ƥ���Τǡ�&simpleArray��char�ؤΥݥ��󥿤ؤΥݥ��󥿤Ȥ��ơ��Ĥޤ�char **
	// �Ȥ��Ʋ�ᤵ���Τǡ��ߴ�����̵���ݥ��󥿤��Ф���ٹ𤬽��Ϥ���ޤ���
	printf("%d\n", stringLength(&simplePtr));

}


