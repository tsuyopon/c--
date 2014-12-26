//
// malloc�ǳ�����Ƥ��ΰ褬��­����Τǡ�calloc�ǺƳ�����Ԥ��ץ����
//
#include<stdio.h>
#include<stdlib.h>

char* getLine(void){
	const size_t sizeIncrement = 10;
	char* buffer = malloc(sizeIncrement);

	// currentPosition����Ƭ��buffer��Ʊ�����ɥ쥹�ͤ�ؤ��Ƥ��ޤ���
	char* currentPosition = buffer;
	size_t maximumLength = sizeIncrement;
	size_t length = 0;
	int character;

	// malloc()����������������Ǥ��ʤ����NULL
	if(currentPosition == NULL){ return NULL; }

	// \n�����Ϥ����ޤǤ��ä�ʸ�����ɤ߹��ߤޤ���
	while(1){
		// ɸ�����Ϥ���1ʸ���ɤ߹��ߤޤ���
		character = fgetc(stdin);

		// ���Ԥ����Ϥ��줿��whileʸ��break���ޤ���
		if(character == '\n'){ break; }

		// ʸ������maximumLength��Ķ������realloc���ΰ�����ä��ޤ���
		if(++length >= maximumLength){

			// realloc�ǺƳ�����Ԥ��ޤ���������ƤƤ���ʸ������Ķ�������ˤ�maximumLength��10�ɲä��Ƥ��ޤ���
			char *newBuffer = realloc(buffer, maximumLength += sizeIncrement);
			if(newBuffer == NULL){
				free(buffer);
				return NULL;
			}

			// currentPosition�Υ��ɥ쥹�ͤ򻻽Ф��ޤ���
			currentPosition = newBuffer + (currentPosition - buffer);

			// ʸ������Ƭ�Υ��ɥ쥹��newBuffer�Ǥ���
			buffer = newBuffer;
		}

		// currentPosition���ͤ�ʸ������ɲä��Ƥ��ޤ���
		*currentPosition++ = character;
	}

	// while����λ�����Τǡ��Ǹ��ʸ����˲��Ԥ��ɲä��ޤ���
	*currentPosition = '\n';
	return buffer;
}

int main(){
	char *ret;
	ret = getLine();
	printf("%s\n", ret);
	if( ret != NULL ){
		free(ret);
	}
}
