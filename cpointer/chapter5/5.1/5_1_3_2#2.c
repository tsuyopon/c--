#include<stdio.h>
#include<stdlib.h>

int main(){

//  char�ݥ��󥿤���������Τˡ�ʸ�������Ȥ��Τ�����������ޤ���
//  ʸ������η���int�Ǥ��뤿�ᡢchar�ؤΥݥ��󥿤�int���������뤳�Ȥˤʤ�Τǰʲ��ξ��ˤϥץ����ϰ۾ｪλ���ޤ���
//	char* prefix = '+';
//	printf("%s\n", prefix);

	// �ʲ���malloc�ؿ������Ѥ�����������ˡ��Ҳ��פ��ޤ���
	char *prefix = (char*)malloc(2);
	*prefix = '+';
	*(prefix+1) = 0;
	printf("%s\n", prefix);

}
