#include <cstdio>
using namespace std;

int main(){
	signed char a = -1;
	int b;

	b = a;
	printf("%08X (%d)\n", b, b);

	// ��Ū�����̤η��Ѵ���Ԥ���硢static_cast���Ѥ���
	b = static_cast<unsigned char>(a);
	printf("%08X (%d)\n", b, b);
}
