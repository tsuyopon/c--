#include<iostream>
using namespace std;

/*
 * ���쥯�饹ABase
 */
class ABase {
	public:
		virtual ~ABase(){}
		virtual void AHoge() = 0;
};

/*
 * ABase��Ѿ�����A1, A2���饹
 */
class A1 : virtual public ABase {
	public:
		virtual void AHoge(){
			cout << "A1::AHoge" << endl;
		}
};

class A2 : virtual public ABase {
	public:
		virtual void AHoge(){
			cout << "A2::AHoge" << endl;
		}
};

/*
 * A1, A2��Ѿ�����C���饹
 */
class C : public A1, public A2 {

	// C���饹��A1, A2��ʣ�����饹��¿�ŷѾ����Ƥ���褦�ʾ�硢
	// AHoge()�򥪡��С��饤�ɤ��ʤ���A1¦��AHoge()��ƤӽФ�����A2¦��AHoge()��ƤӽФ����狼��ޤ���Τǥ���ѥ��륨�顼�Ȥʤ�ޤ���
	public: void AHoge(){
		cout << "C::Ahoge" << endl;
		A1::AHoge();
		A2::AHoge();
	}
};

int main(){
	C c;
	ABase& a = c;
	c.AHoge();
}
