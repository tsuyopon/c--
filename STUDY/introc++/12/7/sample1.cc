/*
 * ñ����ͤ��֤������δؿ��ʤɤϡ��Ƥֲ����¿���Ȥ�������ؿ���ƤӽФ������С��إåɤ��礭���ʤ롣
 * ���Τ���˥���饤��ؿ��Ȥ������Ȥߤ�Ȥ��Ƚ����򤽤ξ���������Ǥ���뤳�Ȥ��Ǥ��롣
 */
#include <iostream>
using namespace std;

class Test{
	public:
		Test(int i);
		int Get();
		int var;
};

Test::Test(int i){
	var = i;
}

int Test::Get(){
	return var;
}


int main(){
	Test test(3);
	for(double i=0; i < 500000000; i++){
		test.Get();
	}
	cout << "End of Program." << test.Get() << endl;
}
