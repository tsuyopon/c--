#include "Fraction.h"
#include <iostream>
using namespace std;

// constructor
Fraction::Fraction(double numer, double denom) : m_numer(numer), m_denom(denom){
}

// ʬ�Ҥμ���
double Fraction::GetNumer() const {
	return m_numer;
}

// ʬ��μ���
double Fraction::GetDenom() const {
	return m_denom;
}

//////////////////////////////////////////////////
// ���㥹�ȱ黻�ҤΥ����С��������
//////////////////////////////////////////////////
// �ʲ���double()���Υ����С���������Ǥ���
Fraction::operator double() const { 
	cout << "##### double() overload called" << endl;
	return m_numer / m_denom;
}

// ñ��黻��"*"���Ф��륪���С��������
Fraction Fraction::operator*(const Fraction& rop) {
	cout << "##### * overload called" << endl;
	m_numer *= rop.m_numer;
	m_denom *= rop.m_denom;
	return Fraction(m_numer, m_denom);
}

// ñ��黻��"-"���Ф��륪���С��������
Fraction Fraction::operator-() const {
	cout << "##### - overload called" << endl;
	return Fraction(-m_numer, m_denom);
}

// ����黻��"*="�Υ����С��������
Fraction& Fraction::operator*=(const Fraction& rop){
	cout << "##### *= overload called" << endl;
	m_numer *= rop.m_numer;
	m_denom *= rop.m_denom;

	// �������֤��٤��ͤϡ��֤��Υ��дؿ���Ƥ֤���˻��Ѥ������֥������Ȥ��Ф��뻲�ȤǤ�������ϡ�*this�פ�ɽ���Ǥ��ޤ���[j
	// this�ϡ����С��ؿ���Ƥ֤Τ˻Ȥä����֥������ȤΥ��ɥ쥹����ĥݥ��󥿤Ǥ��� *this�ˤ����дؿ���Ƥ֤Τ˻Ȥä����֥������Ȥ�ؤ������ޤ���
	return *this;
}

// ���֥��󥯥����"++"�Υ����С��������(��: ++a)
Fraction& Fraction::operator++(){
	cout << "##### before increment ++ overload called" << endl;
	m_numer += m_denom;
	return *this;
}

// ���֥��󥯥����"++"�Υ����С��������(��: a++)
Fraction& Fraction::operator++(int){            // ���֥��󥯥���ȤǤ�int���Υ��ߡ�������ɬ�פǤ���
	cout << "##### after increment ++ overload called" << endl;
	Fraction& ret = *this;
	m_numer += m_denom;
	return ret;
}

