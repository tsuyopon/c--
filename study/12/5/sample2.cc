/*
 *  ���إȡ�����˴ؤ��륵��ץ�Ǥ���
 *
 */
#include <iostream>
using namespace std;

// "#"��"%:"��ɽ�����Ȥ��Ǥ���
// "##"��"%:%:"��ɽ�����Ȥ��Ǥ��롣
%:define TEST 111; 

int main()
<%   // "{"��"<%"��ɽ�����Ȥ��Ǥ���

	cout << "ALTERNATIVE TOKEN START" << endl;

	// "[" �� "<:"��ɽ�����Ȥ��Ǥ��롣"]"��":>"��ɽ�����Ȥ��Ǥ��롣
	int a<:5:>;
	a<:0:> = 100;
	cout << a<:0:> << endl;

	// "&&"��"and"��ɽ�����Ȥ��Ǥ���
	if( 1 and 1 ){
		cout << "and ok" << endl;
	}

	// "||"��"or"��ɽ�����Ȥ��Ǥ���
	if( 1 or 1 ){
		cout << "or ok" << endl;
	}

	// "!"��"not"��ɽ�����Ȥ��Ǥ���
	if(not false){
		cout << "not ok" << endl;
	}

	// "!="��"not_eq"��ɽ�����Ȥ��Ǥ���
	if(1 not_eq 0){
		cout << "not_eq ok" << endl;
	}

	// "^"��"xor"��ɽ�����Ȥ��Ǥ���
	if( 1 xor 0){
		cout << "xor ok" << endl;
	}

	// "&"��"bitand"��ɽ�����Ȥ��Ǥ���
	cout << "bitand: " << (1 bitand 1 )<< endl;

	// "|"��"bitor"��ɽ�����Ȥ��Ǥ���
	cout << "bitor: " << (1 bitor 1 )<< endl;

	// "~"��"compl"��ɽ�����Ȥ��Ǥ���
	cout << "compl:" << (compl 128) << endl;

	int flags = 6;  // (0110)[2�ʿ�]
	int flags1, flags2, flags3, flags4;

	flags1 = flags;
	flags2 = flags;
	flags3 = flags;
	flags4 = flags;

	// "&="��"and_eq"��ɽ�����Ȥ��Ǥ���
	flags1 and_eq 5;  // 5 = (0101)[2�ʿ�]
	cout << "and_eq:" << flags1 << endl;

	// "|="��"or_eq"��ɽ�����Ȥ��Ǥ���
	flags2 or_eq 5;  // 5 = (0101)[2�ʿ�]
	cout << "or_eq:" << flags2 << endl;

	// "^="��"xor_eq"��ɽ�����Ȥ��Ǥ���
	flags3 xor_eq 5;  // 5 = (0101)[2�ʿ�]
	cout << "xor_eq:" << flags3 << endl;

%>   // "}"��"%>"��ɽ�����Ȥ��Ǥ���
