#include <iostream>
using namespace std;

/*
 * "const char* p;" �Ȥ���Ȼ����褬����Ȥʤ롣p���Τ�����Ϥʤ�ʤ���
 * "char* const p = &a;" �Ȥ���ȥݥ���p������ˤʤ�
 * �嵭ξ��������ˤ��������ˤ� "const char* const p"�Ȥ���Ф褤
 */
const char* const MONTH_NAME[] = {
	"Jan", "Feb", "Mar", "Apr", "May", "Jun", "July", "Aug", "Sep", "Oct", "Nov", "Dec"
};

// �ؿ��ݥ��󥿤�����Ȥ���
const char* GetOldMonthName(int month){
	if( (1 <= month) && (month <= 12) ){
		return MONTH_NAME[month-1];
	}
	return 0;   // 0 equals NULL
}

int main(){
	int month;
	cout << "What month is it now? > " << flush;
	cin >> month;

	const char* name = GetOldMonthName(month);
	if(name == 0){
		cout << "input error" << endl;
	} else {
		cout << name << endl;
	}
}
