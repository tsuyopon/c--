#include<iostream>
#include<string>
using namespace std;

void Show(string* str){
	if( !(str == NULL || str->empty()) ) {
		cout << *str << endl;
	}
}

int main(){
	Show(NULL);    // (1)

	string str;
	Show(&str);    // (2) str��NULL�Ǥ���Τ�Show()�᥽�å����str->empty()���¹Ԥ���ʤ��Τǰ����Ǥ��롣

	str = "Hoge";
	Show(&str);    // (3) 
}
