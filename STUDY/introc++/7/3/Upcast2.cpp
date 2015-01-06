#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

void Show(const Stream& stream){     // InputStream�δ��쥯�饹�Ǥ��뤳�Ȥ����(upcast)
	cout << stream.Get() << endl;
}

/* 
 * �嵭�Τ褦�˥��åץ��㥹�Ȥ��줿Show()�ؿ��������������ǡ��ʲ��Τ褦�ˣ�����Υ᥽�åɤ��������ɬ�פ��ʤ��ʤ�ޤ���
 */
/*
void Show(const InputStream& stream){
	cout << stream.Get() << endl;
}

void Show(const ArrayStream& stream){
	cout << stream.Get() << endl;
}
 */

int main(){
	InputStream istream;
	cout << "> " << flush;
	istream.Set();
	Show(istream);                            // Upcasting. istream is InputStream. 

	static const double ARRAY[] = { 3, -1 };
	ArrayStream astream(ARRAY);

	astream.Set();
	Show(astream);                            /// Upcasting. astream is ArrayStream.
}
