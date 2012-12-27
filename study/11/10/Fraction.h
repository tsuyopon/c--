#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
	public:
		Fraction(double numer = 0, double denom = 1);
	public:
		double GetNumer() const;   // ʬ�Ҥμ���
		double GetDenom() const;   // ʬ��μ���

	// �����С��������
	public:
		operator double() const;
		Fraction operator*(const Fraction& rop);
		Fraction operator-() const;
		Fraction& operator*=(const Fraction& rop);
		Fraction& operator++();
		Fraction& operator++(int);

	private:
		double m_numer;
		double m_denom;
};

#endif   // #ifndef FRACTION_H_
