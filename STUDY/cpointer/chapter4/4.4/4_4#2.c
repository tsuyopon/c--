//
// malloc�ǳ�����Ƥ��ΰ��trim���ơ�calloc���ΰ��̾����ޤ���
//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *trim(char* phrase){
	char *old = phrase;
	char *new = phrase;

	// ���ڡ���������֤�old����Ƭ�ݥ����������ä��������Τǡ�old�ݥ��󥿤�1�����ä�����
	while(*old == ' '){
		old++;
	}

	// old���ͤ�¸�ߤ��Ƥ���С�whileʸ��¹Ԥ��롣
	// old�Ǥϥݥ��󥿤Υݥ�����󤫤饹�ڡ���������"cat"����Ƭ�ˤ�����褦�ˤʤäƤ��롣
	// malloc���ΰ������Ѥ����ޤ�c, a, t�ν��֤�new�ݥ��󥿤���Ƭ������֤�old���ͤ򥳥ԡ����Ƥ��äƤ��ޤ���
	while(*old){
		// old�˥��ɥ쥹��1�ɲä����ͤ�new�˥��ɥ쥹1�ɲä����ͤ��������Ƥ���
		// �Ĥޤꡢold�κǽ��2�ĤΥ��ڡ����ϥݥ�������ư�򤷤Ƥ���Τǡ�old��3���ܤ�"c"��new��1���ܡ�old��4���ܤ�"a"��new��2���ܡ�old��5���ܤ�"t"��new�Σ����ܤȤʤ�ޤ���
		*(new++) = *(old++);
	}

	// �������Ϳ���ʤ���"catat"�ߤ������ͤ�ɽ������Ƥ��ޤ���
	*new = 0;  // '\0'�Ǥ�OK

	return (char*)realloc(phrase, strlen(phrase)+1);
}

int main(){
	char *buffer = (char*)malloc(strlen("  cat") + 1);
	strcpy(buffer, "  cat");
	printf("%s\n", trim(buffer));
}
