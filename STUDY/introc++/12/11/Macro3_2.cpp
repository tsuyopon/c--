/*
 * test.txt�Υե������open���ƣ��Ԥ����ɤ߼�äơ����̾�˽��Ϥ��ޤ���
 * Macro3.cpp�Υ��顼������ޥ����ȤäƤ��ޤ���
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

// ���顼������ޥ��������ȤäƤ��ä��ꤵ���ޤ���ʣ���Ԥ˸٤����ˤ�\��Ȥ��ޤ��� 
#define ON_ERROR_GOTO(expr) \
	error = (expr); \
	if(error != NULL) { \
		goto ON_ERROR; \
	}

const char* Open(ifstream& file, const char* filename){
	file.open(filename);
	return file.is_open() ? NULL : "Could not open file!";
}

const char* GetLine(ifstream& file, string& line){
	getline(file, line);
	return file.fail() ? "Could not read from file!" : NULL;
}

int main(){
	const char* error = NULL;
	ifstream file;
	string line;

	// �ե�������Ƭ�ն����������ޥ��������ȤäƤ��ä��ꤵ���Ƥ��ޤ���
	ON_ERROR_GOTO(Open(file, "test_Macro3.txt"))
	ON_ERROR_GOTO(GetLine(file, line))

	cout << line << endl;
	return EXIT_SUCCESS;

ON_ERROR:
	cerr << error << endl;
	return EXIT_FAILURE;
}
