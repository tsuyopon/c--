/*
 * �ؿ����Ϥ���ʸ�������������ץ����(part1)
 */
#include<stdio.h>
#include<stdlib.h>

char* format(char *buffer, size_t size, const char* name, size_t quantity, size_t weight){
	snprintf(buffer, size, "Item: %s, Quantity: %u, Weight: %u", name, quantity, weight);
	return buffer;
}

int main(){

	// "char *buffer"����������ΰ褬���ݤ���ʤ��Τǡ������ե��򤪤����ޤ���
	// ���Τ��ᡢ��ʬ���ϰϤ���ꤷ�Ƴ��ݤ��Ƥ���ɬ�פ�����ޤ���
	char buffer[100];
	printf("%s\n", format(buffer, sizeof(buffer), "Axle", 25, 45));
}
