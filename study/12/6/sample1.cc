/*
 * ñ����ͤ��֤������δؿ��ʤɤϡ��Ƥֲ����¿���Ȥ�������ؿ���ƤӽФ������С��إåɤ��礭���ʤ롣
 * ���Τ���˥���饤��ؿ��Ȥ������Ȥߤ�Ȥ��Ƚ����򤽤ξ���������Ǥ���뤳�Ȥ��Ǥ��롣
 */
#include <iostream>
using namespace std;

inline int Get(){
	return 100 * 100 * 100;
}

int main(){
	for(double i=0; i < 500000000; i++){
		Get();
	}
	cout << "End of Program." << Get() << endl;
}
