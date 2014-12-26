/*
 * �ؿ����Ϥ���ʸ�������������ץ����(part2)
 *   
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* format(char *buffer, size_t size, const char* name, size_t quantity, size_t weight){

	char *formatString = "Item: %s, Quantity: %u, Weight: %u";
	size_t formatStringLength = strlen(formatString)-6;  // -6��%s, %s, %u��6ʸ��ʬ��ɽ���ޤ���
	size_t nameLength = strlen(name);
	size_t length = formatStringLength + nameLength + 10 + 10 + 1;  // 10 + 10: ���ͤȽŤ���ե����ޥåȤ���ݤ�ͽ�ۤ�������Ĺ��+1: NULL

	if( buffer == NULL ){
		buffer = (char*)malloc(length);
		size = length;
	}

	snprintf(buffer, size, formatString, name, quantity, weight);
	return buffer;
}

int main(){

	// 5_3_3#1.c�Ǥ� char buffer[100];��������Ƥ����������Ǥϥݥ�������������Ƥ��ʤ����Ȥ����
	char *buffer;
	printf("%s\n", format(buffer, sizeof(buffer), "Axle", 25, 45));
	free(buffer);

}
