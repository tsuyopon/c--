#include "InputStream.h"
#include <iostream>
using namespace std;

// constructor
// �������饹�Υ��󥹥ȥ饯�����ƤФ��ȡ��������˴��쥯�饹�Υ��󥹥ȥ饯�����ƤФ�롣
// ����ξ����ȴ��쥯�饹Stream�Υ��󥹥ȥ饯���ϰ�����ɬ��ɬ�פȤ���Τǡ�
// �ʲ��Τ褦������Ū�˥��󥹥ȥ饯�����Ф����������ꤷ�ʤ���Фʤ�ޤ���
InputStream::InputStream(double n) : Stream(100){
	cout << "InputStream Constructor. arg = " << n << endl;
}

InputStream::~InputStream(){
	cout << "InputStream Destructor" << endl;
}
