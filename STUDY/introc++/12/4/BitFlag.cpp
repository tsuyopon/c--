/*
 * �ӥåȥե饰�λ��Ȥߤ˴ؤ��륵��ץ�Ǥ���
 * fopen ���ǻ��ꤵ���ӥåȥե饰�λ��Ȥߤߤ����ʤ�ΤǤ��礦��
 *
 */
#include <iostream>
using namespace std;

int Bit(int x){
	return 1 << x;
}

const int SHOW_X = Bit(0);
const int SHOW_Y = Bit(1);
const int SHOW_Z = Bit(2);

void Show(int flags){
	cout << ( ( flags & SHOW_X) != 0 ? 'X' : 'x')
		 << ( ( flags & SHOW_Y) != 0 ? 'Y' : 'y')
		 << ( ( flags & SHOW_Z) != 0 ? 'Z' : 'z')
		 << endl;
}

int main(){
	Show(0);                     // ������0(=000)
	Show(SHOW_Y);                // ������10(=010)
	Show(SHOW_X|SHOW_Z);         // ������101
	Show(SHOW_X|SHOW_Y|SHOW_Z);  // ������111
}
