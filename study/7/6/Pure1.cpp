/*
 * ��貾�۴ؿ��Υ���ץ�Ǥ���
 * ����ϡ��������饹��ƤӽФ�����˴��쥯�饹��SetBase()�Ȥ���̵�̤ʴؿ���̵������������Ƥ��ޤ�����
 * ���������إå��ե�����ˡ�virtual void SetBase() = 0�פȵ��Ҥ�������Ǽ��Τ��������ɬ�פ�����ޤ���
 */
#include "InputStream.h"
#include <iostream>
using namespace std;

int main(){
	InputStream istream;
	cout << "> " << flush;
	istream.Set();
	cout << istream.Get() << endl;
}
