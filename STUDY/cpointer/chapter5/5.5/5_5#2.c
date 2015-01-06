/*
 * ʸ���������sort��ؿ��ݥ��󥿤����Ѥ��ƹԤ�
 */
#include<stdio.h>

// �ؿ��ݥ��󥿤η����������
typedef int (*fptrOperation)(const char*, const char*);

// �Х֥륽���ȥ��르�ꥺ��ˤ��sort�ؿ�
void sort(char *array[], int size, fptrOperation operation){
	int i;
	int swap = 1;
	while(swap){
		swap = 0;
		for(i = 0; i < size-1; i++){
			// �ؿ��ݥ��󥿤ˤ�ä�compare�ؿ����ƤӽФ���Ƥ���
			if(operation(array[i], array[i+1]) > 0){
				swap = 1;
				char *tmp = array[i];
				array[i] = array[i+1];
				array[i+1] = tmp;
			}
		}
	}
}

// ɽ���Ѵؿ�
void displayNames(char* names[], int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%s   ", names[i]);
	}
	printf("\n");
}

int compare(const char* s1, const char* s2){
	return strcmp(s1, s2);
}

int main(){
	char* names[] = {"Bob", "Ted", "Carol", "Alice", "alice"};
	sort(names, 5, compare);
	displayNames(names, 5);
}
