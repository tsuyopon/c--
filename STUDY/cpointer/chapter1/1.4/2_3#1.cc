#include<stdio.h>

int main(){

	// �ʲ��򥳥��ȥ��󤷤ƥ���ѥ��뤹��Ȳ������顼��ɽ������ޤ���
	// �����cpi�����const int�η��������ΤǤ���С�
	//    error: invalid conversion from 'const int*' to 'int*' [-fpermissive]
//	const int limit0 = 500;
//	int *const cpi0 = &limit0;

	const int limit = 100;

	/* ����ؤ�����ݥ��󥿤���� */
	// �ʲ�������ˤ�äơ֥ݥ����ͤ��ѹ��פȡ֥ݥ��󥿤��ؤ������Ƥ���ǡ������ѹ��פϽ���ޤ���
	// �Ĥޤꡢ�����ϥݥ�����������Ʊ���˽�������ʤ���Х���ѥ�����˥��顼�Ȥʤ�ޤ��Τ���դ�ɬ�פǤ���
	// ���������ɬ�פȤʤ���̤����˵��ʤ��Ȥ�¿���褦�Ǥ���
	const int * const cpci = &limit;

	printf("cpci_addr=%d, cpci_value=%d, limit_value=%d\n", &cpci, *cpci, limit);

}
