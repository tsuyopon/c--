#ifndef STREAM_H_
#define STREAM_H_

class Stream {
	public:
		double Get() const;
		bool Set();
		double m_n;

	protected:
		virtual void SetBase() = 0;  // ��貾�۴ؿ��Ǥ�������Τߤǡ��ºݤ��������Ƥ��ʤ����Ȥ���դ��Ƥ���������
};

#endif
