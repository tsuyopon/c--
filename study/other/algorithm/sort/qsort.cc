/*
 *  qsort�����Ѥ��ƴؿ��ݥ��󥿤ˤĤ��Ƴؽ�����
 *
 */
#include<stdio.h>
#include<stdlib.h>

// �ʲ��Ǥϡ�void *a�פȤʤäƤ��ޤ�����void���ݥ��󥿤Ϥɤ�ʥݥ��󥿤Ǥ��������뤳�Ȥ�
// �Ǥ���褦�ˤʤäƤ��ޤ���
// (����) http://www.mm2d.net/c/c-17.shtml
//        http://www.cc.kyoto-su.ac.jp/~yamada/ap/qsort.html
int compare(const void *a, const void *b){
	/* ��*(int*)a�פȤ������Ҥ�
	 *  (int*)a�ˤ�ä�a��int���Υ��ɥ쥹�˥��㥹�Ȥ��Ƥ��ޤ���
	 *  *(int*)a�ˤ�äƾ嵭�Ǽ����������ɥ쥹���ͤ��Ѵ����Ƥ��뤳�Ȥˤʤ�ޤ���
	 */
	return *(int *)a - *(int *)b;

	// ����ͤ˴ؤ��������
	// a���ͤ�b���ͤ�����Ǥ��������֤����դǤ���������֤��ޤ���
	// a���ͤ�b���ͤΤɤ��餬��Ǥ⤤���Ȥ��ˤ�0���֤��Ƥ��ޤ���
}

int main(void){
	int array[10] = { 27, 10, 7, 8, 9, 12, 22, 14, 13, 3};
	int i;

	/*
	 * void qsort(void *base, size_t n, size_t size, int (*fnc)(const void*, const void*))
	 *
	 * ������  int (*fnc)(const void*, const void*)
	 * �Ȥ������Ҥ�
	 * *fnc���ͤǤ��뤳�Ȥ򼨤��Ƥ��ޤ��������ͤϴؿ�̾�Τǡ������Ǥ���compare�Ǥ���
	 * void*�Ϥɤ�ʥݥ��󥿤Ǥ��������뤳�Ȥ���ǽ�Ǥ��뤳�Ȥ�ɽ����const����Ϳ����뤳�Ȥˤ�äơ�
	 * ����Ū���ͤ��ѹ�����뤳�Ȥ��ʤ����Ȥ��̣���Ƥ��ޤ���
	 */
	qsort(array, 10,  sizeof(int), compare);     // compare�Ȥ��ƴؿ��ݥ��󥿤����ꤵ��Ƥ��롣�פ���˥�����Хå��ؿ��Ǥ���
	for(i = 0; i < 10; i++){
		printf("%d,", array[i]);
	}
	printf("\n");
	return 0;
}
