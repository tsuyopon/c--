#include<stdio.h>

int main(){

	// ������
	const int limit = 500;

	// ����ؤ�����ݥ��󥿤����
	const int * const cpci = &limit;

	// ����ؤ�����ݥ��󥿤ؤΥݥ������
	const int * const * pcpci;
	pcpci = &cpci;

	// ��**pcpci�פˤ���*cpci�פ�Ʊ���ͤ�ؤ������褦�ˤʤ�ޤ���
	printf("cpci_value=%d, pcpci_value=%d\n", *cpci, **pcpci);

}
