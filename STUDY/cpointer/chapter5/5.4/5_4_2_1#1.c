/*
 * �ɽ��ѿ�ʸ����Υ��ɥ쥹��ؿ������֤�(���Ѥ��ƤϤʤ�ʤ�)
 *   ##���Υץ����Ϸٹ�ȤȤ�˥���ѥ���Ǥ��ޤ�������������ư�򼨤��ޤ���
 */
#include<stdio.h>

#define MAX_TAB_LENGTH 32

char *blanks(int number){

	char spaces[MAX_TAB_LENGTH];
	int i;
	for(i = 0; i < number && i < MAX_TAB_LENGTH; i++){
		spaces[i] = ' ';
	}
	spaces[i] = '\0';

	// blanks�ؿ���������������ɽ��ѿ��Υ��ɥ쥹���֤��Τ�����Ǥ���
	// �ʤ��ʤ�С�����ʸ������̤δؿ��ƤӽФ��ˤ�륹���å��ե졼��ˤ�äƾ�񤭤�������������ޤ���
	return spaces;
}

int main(){
	char *tmp;
	tmp = blanks(5);
	printf("#%s#\n", tmp);
}
