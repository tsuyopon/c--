#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char *name = (char*)malloc(strlen("Susan")+1);
	strcpy(name, "Susan");
	while(*name != 0){
		printf("%c", *name);

		// ʸ�����NUL��üʸ����ؤ������֤ǥ롼�פ���λ���ޤ���
		// �Ĥޤꡢ������Ƥ�������κǽ�Υ��ɥ쥹��ʶ�����Ƥ��ޤ��ޤ�����
		name++;
	}

	// name����Ƭ�ݥ��󥿤�ؤ��Ƥ��ʤ��Τ�free��¹Ԥ��Ƥ�invalid pointer���顼�Ȥʤ�ޤ���
	free(name);

}
