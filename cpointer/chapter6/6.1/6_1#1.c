/*
 * ��¤�Τ�����ȥ���������ˡ�ˤĤ���
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct _person {
	char* firstName;
	char* lastName;
	char* title;
	unsigned int age;
} Person;

// �ʲ��Τ褦��typedef�Ǥʤ����ˤ��������"struct _person person[n];"�Ȥ��ʤ���Фʤ�ʤ�
/*
struct _person {
	char* firstName;
	char* lastName;
	char* title;
	unsigned int age;
};
*/

int main(){

	// ��¤�Υ������ΰ�򤢤餫�������
	Person person[1];
	person[0].firstName = "first";        // ���������ˤϥɥåȤ�Ȥ�
	printf("%s\n", person[0].firstName);

	// ��¤�Υ������ΰ��ưŪ�˼�������
	Person *dyPerson;
	dyPerson = (Person*)malloc(sizeof(Person));
	dyPerson->firstName = "second";      // ���������ˤϥ����黻�Ҥ�Ȥ�
	printf("%s\n", dyPerson->firstName);

}
