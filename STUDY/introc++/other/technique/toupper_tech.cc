#include<stdio.h>
#include<ctype.h>  // for toupper()

int main(void){
	int i = 0;
	char s[] = "helloooooo";

	while( s[i] != '\0' ){
		s[i] = s[i] - 32;   // ��s[i] = touppper(s[i]);�פ�Ʊ����32�������Ȥ�ASCII����ʸ���ˤʤ뤳�Ȥ����Ѥ��Ƥ��ޤ���
		i++;
	}

	printf("%s\n", s);
	return 0;
}
