#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct _person {
	char* firstName;
	char* lastName;
	char* title;
	unsigned int age;
} Person;

int main(){

	/*
	 * �����黻�ҤǤΥ�������
	 */

	// ���󥹥�������ȹ�¤���ΰ����
	Person *ptrPerson;
	ptrPerson = (Person*)malloc(sizeof(Person));

	// age�ʳ����ѿ��ˤĤ��Ƥϥ��ɥ쥹����������Ƥ��ʤ��Τǡ����ɥ쥹��������ѿ��ˤϼ��Υ���γ�����ɬ�פȤʤ�ޤ���
	ptrPerson->firstName = (char*)malloc(strlen("Emily")+1);

	// �ͤ�����
	strcpy(ptrPerson->firstName, "Emily");
	ptrPerson->age = 23;

	// ����
	printf("arrow: firstName=%s, age=%d\n", ptrPerson->firstName, ptrPerson->age);

	/*
	 * �ɥåȱ黻�ҤǤΥ�������
	 */

	// ���󥹥�������ȹ�¤���ΰ����
	Person *ptrPerson2;
	ptrPerson2 = (Person*)malloc(sizeof(Person));
	(*ptrPerson2).firstName = (char*)malloc(strlen("Emily")+1);

	// �ͤ�����Ƚ���
	strcpy((*ptrPerson2).firstName, "Emily");
	(*ptrPerson2).age = 23;
	printf("dot:   firstName=%s, age=%d\n", ptrPerson2->firstName, ptrPerson2->age);

}
