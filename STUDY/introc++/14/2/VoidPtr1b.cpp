/* ���Υץ����ϥ��顼�ˤʤ�ޤ��� 
 * ����ѥ������15, 18, 21���ܤλ��ȤǤΤߥ��顼�ȤʤäƤ��ơ�12��14��17��20���ܤǤϥ��顼���ФƤ��ʤ����Ȥ����ܤ��Ƥ���������
 */

#include<iostream>
using namespace std;

int main(){
	char   c = '1';
	int    i = 2;
	double d = 3;
	void* p;             // void���ΤؤΥݥ������

	p = &c;              // void���ؤ�����
	cout << *p << ' ';   // void���ݥ��󥿤λ���

	p = &i;
	cout << *p << ' ';

	p = &d;
	cout << *p << endl;
}
