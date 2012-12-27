/*
 * sample1.cc��At�ؿ��򻲾ȤǤϤʤ����ݥ��󥿤�Ȥäƽ񤭴�������ΤǤ���
 */
#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class IntArray {

	public:
		IntArray(int size);
		~IntArray();

	public:
		void CheckIndex(int i);
		int* At(int i);

	private:
		int* m_array;
		int m_size;
};

IntArray::IntArray(int size){
	m_array = new int[size];
	m_size = size;

	cout << "called constructer. element count is " << m_size << endl;
}

IntArray::~IntArray(){
	delete [] m_array;
	cout << "called destructer. element count is " << m_size << endl;
}

void IntArray::CheckIndex(int i){
	if( 0 <= i && i < m_size ){
		cout << "check ok: value=" << i << endl;
	} else {
		cout << "index is invalid. value=" << i << endl;
		exit(EXIT_FAILURE);
	}
}

// sample1.cc�λ��Ȥ��֤��ؿ���Ʊ�����Ȥ�ݥ��󥿤�Ȥäƽ񤭴����Ƥ��ޤ���
int* IntArray::At(int i){
	cout << "At method start." << endl;
	CheckIndex(i);
	cout << m_array[i] << endl;
	return &m_array[i];
}

int main(){

	cout << "MAIN START" << endl;
	int i;
	IntArray v(5);
	int* ret = v.At(i);
	cout << "INPUT INTEGER > " << flush;
	cin >> *ret;
	cout << "MAIN inputvalue=" << *ret << endl;
	return true;
}

