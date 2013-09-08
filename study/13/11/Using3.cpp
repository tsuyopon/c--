#include <iostream>
using namespace std;

class Show {
	public:
		static void Value(char ch)         { cout << ch  << endl; }
		static void Value(const char* str) { cout << str << endl; }
};

class Show2 : public Show {
	public:
		static void Value(char ch){
			int n = static_cast<unsigned char>(ch);
			cout << n << endl;
		}

	// Show���饹��Ѿ�����Show2���饹�ǡ�Show���饹��Ʊ̾�Υ᥽�å�(Value)����������Show¦��������줿Value�ϻȤ��ʤ��ʤ�ޤ���
	// ��������Τ��ᡢ�ʲ���using��ʸ������Ƥ�����Show::Value��Show2���饹��Ǥ����ѤǤ���褦�ˤʤ�ޤ���
	using Show::Value;
};

int main() {
	Show2::Value('A');      // (1) using Show::Value;���ʤ��Ƥ�¹Բ�ǽ���ʤ��ʤ顢Show2��������줿Value(char ch)�����뤫�顣
	Show2::Value("Hoge");   // (2) using Show::Value;�ιԤ�¸�ߤ��ʤ��Ȥ��ιԤǥ��顼�Ȥʤ�
}
