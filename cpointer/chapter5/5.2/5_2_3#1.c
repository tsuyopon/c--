/*
 * ʸ�����Ϣ��
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	// �ʲ��Σ��Ĥ�ʸ�����Ϣ�뤷�ޤ���
	char* error = "ERROR: ";
	char* errorMessage = "Not enough money";

	// strcat���裱�����Ϸ�礷���ݤ�ʸ��������ݤ��ʤ���Фʤ�ޤ���
	char* buffer = (char*)malloc(strlen(error)+strlen(errorMessage)+1);

	// �ǽ��1���ܤ�strcpy������ˡ�³����concat��¹Ԥ��뤳�Ȥˤ�ä�ʸ�����Ϣ�뤷�ޤ���
	// WARNING: buffer���餺��error��errorMessage��ľ���ɲä��褦�Ȥ���Ȱտޤ��ʤ�ư��Ȥʤ�ޤ���
	strcpy(buffer, error);
	strcat(buffer, errorMessage);

	printf("buffer:       %s\n", buffer);
	printf("error:        %s\n", error);
	printf("errorMessage: %s\n", errorMessage);
}
