#include<stdio.h>

void passingAddressOfConstants(const int* num1, int* num2){
	// *num1 = 111    // const�ΰ٤ˤ����������syntax���顼�Ȥʤ�
	*num2 = 222;
}

int main(){
	const int limit = 100;
	int result = 5;
	passingAddressOfConstants(&limit, &result);
	printf("limit=%d, result=%d\n", limit, result);
	return 0;
}
