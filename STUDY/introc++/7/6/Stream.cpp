#include "Stream.h"
#include <iostream>
using namespace std;

double Stream::Get() const {
	return m_n;
}

bool Stream::Set() {
	SetBase();
	return m_n >= 0;
}

/*
 * �������饹��SetBase()��ƤӽФ�����ˤϡ����쥯�饹�ˤ�SetBase()��¸�ߤ��ʤ��ȥ���ѥ��륨�顼�򵯤����ޤ���
 * ����Ǥϡ��������ؤǤ���
 * �����ǡ���貾�۴ؿ���virtual void SetBase() = 0�פ�إå��ե�������������Ȱʲ��μ��Τ����פǡ�����ѥ��������褦�ˤʤ�ޤ���
 */
/*
void Stream::SetBase(){
	cout << "Stream::SetBase" << endl;
	m_n = -1;
}
*/
