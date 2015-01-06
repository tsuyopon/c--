// Debug.cpp�Ȥΰ㤤��__DATE__, __TIME__����Ϥ��Ƥ����������Ǥ���
#include "Debug2.h"

#ifdef NDEBUG  // ��꡼��

#else          // �ǥХå�

#include <iostream>
#include <cstdlib>
using namespace std;

namespace Debug {
	void Assert(bool b, const char* file, int line, const char* date, const char* time){
		if(b){
		} else {
			cerr << file << '(' << line << ")" << ", compile_date: (" << date << "), compile_time: (" << time << "), Assertion Error!" << endl;
			exit(EXIT_FAILURE);
		}
	}
}

#endif         // #ifndef NDEBUG

int main(){
	ASSERT(false);
}
