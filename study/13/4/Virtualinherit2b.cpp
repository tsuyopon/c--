/*
 * ���Υץ����Ǥϡ�C���饹��ƤӽФ����ݤˣ���ABase::ABase()���󥹥ȥ饯�����ƤӽФ���뤳�Ȥˤʤ�Τǥ���ѥ��륨�顼�Ȥʤ�ޤ���
 */
#include<iostream>
using namespace std;

class ABase {
	public:
		ABase(int x) : m_x(x) {}
		virtual ~ABase(){}

	public:
		void Show() { cout << m_x << endl; }

	protected:
		int m_x;
};

class A1 : virtual public ABase{
	public:
		A1() : ABase(1){}
};

class A2 : virtual public ABase{
	public:
		A2() : ABase(2){}
};

class C : public A1, public A2 {};

int main(){
	C c;
	c.Show();
}
