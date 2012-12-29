/*
 * ¿�ŷѾ��ˤĤ���
 */
#include<iostream>
using namespace std;

/*
 * C���饹����Ѿ��������쥯�饹ABase, BBase
 */
class ABase {
	public:
		virtual ~ABase(){}
		virtual void AHoge() = 0;
};

class BBase {
	public:
		virtual ~BBase(){}
		virtual void BHoge() = 0;
};

/*
 * ABase, BBase��¿�ŷѾ�����C���饹
 */
class C : public ABase, public BBase {
	public:
		virtual void AHoge(){
			cout << "C::AHoge" << endl;
		}
		virtual void BHoge(){
			cout << "C::BHoge" << endl;
		}
};

int main(){
	C c;
	ABase& a = c;
	a.AHoge();

	BBase& b = c;
	b.BHoge();
}
