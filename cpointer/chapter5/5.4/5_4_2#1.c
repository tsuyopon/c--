/*
 * ưŪ�˳�����Ƥ������ؿ������֤����
 */
#include<stdio.h>
#include<stdlib.h>

// ���ꤵ�줿ʸ����ʬ�Υ��ڡ���������������֤��ؿ�
char *blanks(int number){
	char* spaces = (char*)malloc(number + 1);
	int i;
	for(i = 0; i < number; i++){
		spaces[i] = ' ';
	}
	spaces[number] = '\0';
	return spaces;
}

int main(){
	char *tmp = blanks(5);
	printf("#%s#\n", tmp);
	free(tmp);
}
