#include<iostream>
using namespace std;

class Value {

	// ValueFactory���饹�Ǥ�Value���饹��private�Ǥ⼫ͳ�˥����������뤳�Ȥ��Ǥ���褦�ˤʤ�ޤ���
	friend class ValueFactory;

	public:
		int Get() const { return m_n; }

	private:
		Value(int n) : m_n(n) {}
		Value(const Value&);            // ���ԡ����󥹥ȥ饯���򻦤��ޤ�
		void operator=(const Value&);   // �����黻�Ҥ򻦤��ޤ�
		int m_n;
};

class ValueFactory{
	public:
		Value* New(int n) const {
			return new Value(n);      // ValueFactory���饹��Value���饹��friend�������Ƥ���Τ�private�᥽�åɡ��ѿ��˥��������Ǥ���
		}
};

#define ARRAY_SIZE(array) (sizeof(array) / sizeof*(array))

int main(){
	static const int VALUE[] = {
		1, 2, 4, 8,
	};
	static const int SIZE = ARRAY_SIZE(VALUE);

	ValueFactory factory;
	for(int i = 0; i < SIZE; ++i){
		Value* value = factory.New(VALUE[i]);
		cout << value->Get() << ' ';
		delete value;
	}
	cout << endl;
}
