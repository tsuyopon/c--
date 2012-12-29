#include<iostream>
#include<sstream>
#include<string>

using namespace std;

/*
 * �ʲ��Υ��饹�ϲ��ۥǥ��ȥ饯���ճ��ˤϽ�貾�۴ؿ�����¸�ߤ��Ƥ��ʤ����饹�Ǥ���
 * ���Τ褦�ʥ��饹�򥤥󥿥ե��������饹�ȸƤӤޤ���
 */
class IObject {
	public:
		virtual ~IObject(){}
		virtual string GetString() const = 0;
};

ostream& operator<<(ostream& ostr, const IObject& obj){
	return ostr << obj.GetString();
}

/*
 * IInt��IDouble�Σ��ĤΥ��饹��IObject���󥿥ե��������饹��Ѿ����륯�饹�Ǥ���
 */
class IInt : virtual public IObject {
	public:
		virtual int GetInt() const = 0;
};

class IDouble : virtual public IObject {
	public:
		virtual double GetDouble() const = 0;
};

/*
 * double�ͤ���¸���Ƥ��������Τ��餹Double
 * IInt��IDouble��Ʊ���˷Ѿ����Ƥ��ޤ���
 */
class Double : 
	virtual public IInt,
	virtual public IDouble 
{
	public:
		Double(double x) : m_x(x) {}

	public:
		virtual string GetString() const {
			ostringstream ostr;
			ostr << "Double(" << m_x << ")";
			return ostr.str();
		}

		virtual int GetInt() const {
			return static_cast<int>(m_x);
		}

		virtual double GetDouble() const {
			return m_x;
		}

	private:
		const double m_x;
};

void ShowInt(const IInt& obj){
	cout << "int: " << obj.GetInt() << endl;
}

void ShowDouble(const IDouble& obj){
	cout << "double: " << obj.GetDouble() << endl;
}

int main(){
	Double n = 1.2;
	cout << n << endl;
	ShowInt(n);
	ShowDouble(n);
}
