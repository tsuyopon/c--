#include<iostream>
using namespace std;

int main(){
	int flag;

	cout << "Enter 1 or 0 > " << flush;
	cin >> flag;

	flag = 1 - flag;

	//�嵭�����ɤ�flag��0��1��������ʤ����Ȥ��ݾڤ���Ƥ���С��ʲ���Ʊ�ͤǤ���
	/* 
	if( flag == 1 ){
		flag = 0;
	} else {
		flag = 1;
	}
	*/

	cout << flag << endl;

	return true;

}
