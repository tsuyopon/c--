#include <iostream>
#include "Fraction.h"
using namespace std;

int main(){

	// double()�Υ��㥹�ȥ����С�����
	double l = Fraction(100, 5);
	cout << "Fraction(100, 5) => " << l << endl;

	double m = Fraction(10, 2);
	cout << "Fraction(10, 2) => " << m << endl;

	// ñ��黻��- �Υ����С�����
	double n = - Fraction(6, 2);
	cout << "-Fraction(6, 2) => " << n << endl;

	// ñ��黻��* �Υ����С�����
	double o = Fraction(10, 5) * Fraction(6, 2);
	cout << "Fraction(10, 5) * Fraction(6, 2) => " << o << endl;

	// 2��黻��*= �Υ����С�����
	int p = (Fraction(6,2) *= Fraction(3,1));
	cout << "Fraction(6,2) *= Fraction(3,1) => " << p << endl;

	// ���֥��󥯥����++�Υ����С�����
	double q = ++Fraction(6,2);
	cout << "++Fraction(6,2) => " << q << endl;

	// ���֥��󥯥����++�Υ����С�����
	double r = Fraction(6,2)++;
	cout << "Fraction(6,2)++ => " << r << endl;
}
