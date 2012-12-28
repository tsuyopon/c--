#include <cstdio>
using namespace std;

int main(){

	int n = 0x12345678;

	// int* ���� const char*�ؤ�cast��ԤäƤ��ޤ���
	// 1Byte��8bit�δĶ��Ǥ���С�
	//    ��ȥ륨��ǥ�����Ǥϡ�"78 56 34 12"
	//    �ӥå�����ǥ�����Ǥϡ�"12 34 56 78"
	// �Ƚ��Ϥ���ޤ������Τ褦�˴Ķ���¸Ū�ʽ�����տ�Ū�˹Ԥ�����reinterpret_cast�����Ѥ��ޤ���
	const char* p = reinterpret_cast<const char*>(&n);

	for(size_t i = 0; i < sizeof n; ++i){
		printf("%02X ", p[i]);
	}
	printf("<-> %08X\n", n);
}
