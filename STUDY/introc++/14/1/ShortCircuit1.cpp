#include<iostream>
using namespace std;

bool Input(double& value){
	cout << "Input number > " << flush;
	value = 0;
	cin >> value;
	return value != 0;
}

int main(){
	double a, b;

	// (1) Input(a)�κݤ�0�������ͤȤ���Ϳ�����Input(b)���¹Ԥ���뤳�Ȥ��ʤ��ʤ�ޤ��������ShortCircuit�ȸƤӤޤ�
	while(Input(a) && Input(b)){
		cout << "a / b = " << (a / b) << endl;
		cout << "b / a = " << (b / a) << endl;
	}
}
