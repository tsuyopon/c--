/*
 * pointer�Ǥ狼��ˤ����ս�ˤĤ��ƤޤȤ�Ƥ��ޤ���
 *
 *
 *
 */
#include<iostream>
using namespace std;

void testFunc(char m[], char *n);

int main(){

	/* [�ݥ����1]
	 * (1)��(6)�Ǥϡ�(1),(2), (5), (6) ��(3),(4)�ϰۤʤ�ޤ���(1)��(2)��(5)��(6)�Ͻ񤭴����Բ�ǽ��Ʊ��Ǥ����ޤ���(3)��(4)�Ͻ񤭴�����ǽ��Ʊ��ΰ�̣��ɽ���Ƥ��ޤ���
	 */
	char *s1 = "Hello World";            // (1)  �񤭴����Բ�ǽ(����ѥ������Warning��ɽ������뤬a.out�����������)
	const char *s2    = "Hello World";   // (2)  �񤭴����Բ�ǽ( (1)�ǥ��顼�ξ��const����Ϳ�����warning��ɽ������ʤ��褦�ˤʤ�ޤ�)
	char s3[]         = "Hello World";   // (3)  �񤭴�����ǽ
	char s4[12]       = "Hello World";   // (4)  �񤭴�����ǽ
	const char s5[]   = "Hello World";   // (5)  �񤭴����Բ�ǽ
	const char s6[12] = "Hello World";   // (6)  �񤭴����Բ�ǽ

	cout << "s1:" << s1 << endl;
	cout << "s2:" << s2 << endl;
	//cout << "s3:" << s3[] << endl;     // ���ιԤϥ���ѥ��륨�顼�Ȥʤ�
	cout << "s3:" << s3 << endl;
	cout << "s4:" << s4[12] << endl;     // ���ιԤ�12���ܤ�����(�Ĥޤ�'\0')��ɽ�������
	cout << "s5:" << s5 << endl;
	cout << "s6:" << s6[12] << endl;     // ���ιԤ�12���ܤ�����(�Ĥޤ�'\0')��ɽ�������

	testFunc(s3, s3);

}

void testFunc(char m[], char *n){  // [�ݥ����2] �ؿ��ΰ������Ф��Ƥ� m[]�Ǥ�*n�Ǥ�Ʊ���ʤΤ�ʶ��路��
	cout << "===== testFunc START =====" << endl;
	cout << "m[]:" << m << endl;
	cout << "*n:" << n << endl;
}
