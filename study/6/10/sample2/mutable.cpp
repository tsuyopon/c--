/*
 * const���֥������ȤΥ����ѿ����ѹ����뤳�Ȥ��Ǥ��ޤ��󤬡��ޤ���ͤ��ѹ���������礬����ޤ���
 * ���Τ褦�ʻ��ˤϡ������ѿ��η���mutable(�ѹ���ǽ��)�Ȥ����������饹����Ҥ�ä��ޤ���
 * ����ˤ�ꡢconst���֥������ȤǤ��äƤ�����ѿ������Ƥ��ѹ����뤳�Ȥ��Ǥ��ޤ���
 *
 */
class Test{
	public:
		void Hoge() const;

	private:
		mutable int m_hoge;    // mutable definition
};

void Test::Hoge() const {
	m_hoge = 0;                // const�����ꤵ�줿���С��ؿ������mutable�ʥ��С��ѿ����ѹ����Ƥ��롣
}

int main(){
	Test test;
	test.Hoge();
}
