#include<stdio.h>
#include<string.h>

int main(){

	// 1�Ĥ�
	char header1[] = "Media";
	printf("header1=%s\n", header1);

	// 2�Ĥ�
	char header2[6];
	strcpy(header2, "Media");
	printf("header2=%s\n", header2);

	// 3�Ĥ�
	char header3[6];
	header3[0] = 'M';
	header3[1] = 'e';
	header3[2] = 'd';
	header3[3] = 'i';
	header3[4] = 'a';
	header3[5] = '\0';
	printf("header3=%s\n", header3);

}
