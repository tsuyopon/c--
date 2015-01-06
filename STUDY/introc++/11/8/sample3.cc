/*
 * sample1.cc��sample2.cc��At�ؿ���[]�ˤ�ä��֤������뤳�Ȥˤ�ä�v.At(i)��v[i]�Ȥ��ƥ��������Ǥ���褦��
 */
#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class IntArray {

	public:
		IntArray(int size);
		~IntArray();

		// operator�������˺��䤹���Τ����
		int &operator[](int i);
		const int& operator[](int i) const;

	public:
		void CheckIndex(int i) const;
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

void IntArray::CheckIndex(int i) const{
	if( 0 <= i && i < m_size ){
		cout << "check ok: value=" << i << endl;
	} else {
		cout << "index is invalid. value=" << i << endl;
		exit(EXIT_FAILURE);
	}
}

////////////////////////////////////////////////////////////////////
// [] operator�����
////////////////////////////////////////////////////////////////////
int &IntArray::operator[](int i){
	cout << "[] operator1 start." << endl;
	CheckIndex(i);
	cout << m_array[i] << endl;
	return m_array[i];

}

// �ƤӽФ���륪�֥������Ȥ�const���֥������ȤǤ��뤳�Ȥ��θ���ưʲ���������Ƥ����ޤ���
// ��Ԥ�const�ϥ��С��ѿ����ѹ����ʤ����Ȥ�ɽ���Ƥ��ޤ���
const int& IntArray::operator[](int i) const {  
	cout << "[] operator2 start." << endl;
	CheckIndex(i);                        // �����ǸƤӽФ����С��ؿ���const�����ꤵ��Ƥ���ɬ�פ�����Τ�Ŭ�ڤ˻���
	return m_array[i];
}

int main(){
	cout << "MAIN START" << endl;
	IntArray v(5);
	cout << "INPUT INTEGER > " << flush;
	cin >> v[1];
	cout << "MAIN inputvalue=" << v[1] << endl;
	return true;

}

