/*
 * �ӥåȥե饰�λ��Ȥߤ˴ؤ��륵��ץ�Ǥ���
 * �����Ǥϥӥåȥե饰Ʊ�Τι����������ȿž��Ԥ��ޤ���
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

	int flags1 = 0;
	int flags2 = SHOW_Y;
	int flags3 = SHOW_X|SHOW_Z;
	int flags4 = SHOW_X|SHOW_Y|SHOW_Z;

	// �̾�ΥӥåȲù��򤷤ʤ����ν���
	cout << "NORMAL" << endl;
	Show(flags1);
	Show(flags2);
	Show(flags3);
	Show(flags4);

	// �ɲá������Ǥ�SHOW_X�ե饰�򤿤Ƥޤ����ʤ�������bit�����äƤ�����ˤϲ��⤷�ޤ���
	// "flags1 = flags1 | SHOW_X" ��"flags1 != SHOW_X"���ͤ˵��Ҥ��뤳�Ȥ�Ǥ��ޤ���
	cout << "ADDED FLAG" << endl;
	Show(flags1|SHOW_X);
	Show(flags2|SHOW_X);
	Show(flags3|SHOW_X);
	Show(flags4|SHOW_X);

	// �ɲá�SHOW_X, SHOW_Y, SHOW_Z�ե饰�򤹤٤Ƥ��Ƥ�
	Show(flags1|SHOW_X|SHOW_Y|SHOW_Z);

	// �����SHOW_X�ե饰������к�����ޤ����ʤ���bit�ե饰�����äƤ��ʤ���в��⤷�ޤ���
	int dflags1, dflags2, dflags3;
	cout << "DELETE FLAG" << endl;
	dflags1 = flags1;
	dflags2 = flags2;
	dflags3 = flags3;
	dflags1 &= ~SHOW_X;
	dflags2 &= ~SHOW_X;
	dflags3 &= ~SHOW_X;
	Show(dflags1);
	Show(dflags2);
	Show(dflags3);

	// �����SHOW_X, SHOW_Y, SHOW_Z�ե饰�򤹤٤ƺ������
	int dflags4;
	dflags4 = flags4;
	dflags4 &= ~(SHOW_X|SHOW_Y|SHOW_Z); 
	Show(dflags4);

	// ȿž��SHOW_X�ե饰��ȿž�����ޤ���
	int rflags1, rflags2, rflags3;
	cout << "REVERSE FLAG" << endl;
	rflags1 = flags1;
	rflags2 = flags2;
	rflags3 = flags3;
	rflags1 ^= SHOW_X;
	rflags2 ^= SHOW_X;
	rflags3 ^= SHOW_X;
	Show(rflags1);
	Show(rflags2);
	Show(rflags3);

	// ȿž��SHOW_X, SHOW_Y, SHOW_Z�ե饰�򤹤٤�ȿž����
	int rflags4;
	rflags4 = 0;
	rflags4 ^= SHOW_X|SHOW_Y|SHOW_Z;
	Show(rflags4);


}
