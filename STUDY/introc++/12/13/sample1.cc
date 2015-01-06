/*
 * assert�ޥ���˴ؤ����ư���ǧ���ޤ���
 * ���Υץ����ϡ�6.5���sample1.cc�򸵤ˤ��ƺ������Ƥ��ޤ���
 */

//assert�ޥ����cassert�إå����ɤ߹�������NDEBUG��������뤳�Ȥˤ�äơ�assert�ޥ����ΤιԤ�¸�ߤ��ʤ����Τ褦��
//���äƤ���ޤ����ʲ��ιԤ򥳥��ȥ��󤷤ƥ���ѥ��뤷�ƻ�Ƥߤޤ��礦��
// #define NDEBUG

#include <algorithm>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;

const int INTARRAY_SIZE = 10;

class IntArray {
	public:
		int m_array[INTARRAY_SIZE];
		IntArray();
		int Get(int i);
		void Set(int i, int value);
		void CheckIndex(int i);
		void Process();
};

// Constructor
IntArray::IntArray(){
}

// Get Method
int IntArray::Get(int i){
	CheckIndex(i);
	return m_array[i];
}

// Set Method
void IntArray::Set(int i, int value){
	CheckIndex(i);
	m_array[i] = value;
}

// Index Number Checking.
void IntArray::CheckIndex(int i){
	assert(0 <= i && i < INTARRAY_SIZE);
	// assert�ޥ�������Ѥ������ޤǤϡ��ʲ��Υ��å��򵭺ܤ��Ƥ�����
	/*
	if( 0 <= i && i < INTARRAY_SIZE){
		// OK
		cout << "OK: i=" << i << endl;
	} else {
		cout << "Index Number is Invalid." << endl;
		exit(EXIT_FAILURE);
	}
	*/
}

void IntArray::Process(){
}

int main(){
	int i;
	IntArray obj;
	for(i = 0; i < 100; i++){
		cout << i << endl;
		obj.Set(i, i);
	}

	return true;
}
