#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void displayHeader(){
	static char*staticHeader = "Chapter";                    // ����ѿ�
	char* localHeader = "Chapter";                           // �ɽ��ѿ�
	static char staticArrayHeader[] = "Chapter";             // ����ѿ�
	char localArrayHeader[] = "Chapter";                     // �ɽ��ѿ�
	char *heapHeader = (char*)malloc(strlen("Chapter"+1));   // �ɽ��ѿ�
	strcpy(heapHeader, "Chapter");
}
int main(){
	char *globalHeader = "Chapter";                          // ����ѿ�
	char globalArrayHeader[] = "Chapter";                    // ����ѿ�
}
