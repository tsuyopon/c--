#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char name[32];
	char *names[30];
	size_t count = 0;

	printf("Enter your name: ");
	scanf("%s", name);

	// names����Ƭnames[0]��malloc�����Ϥ��줿ʸ����+1��ʸ�γ��ݤ������ɥ쥹���������ޤ���
	names[count] = (char*)malloc(strlen(name)+1);
	strcpy(names[count], name);
	printf("%s\n", names[count]);
}
