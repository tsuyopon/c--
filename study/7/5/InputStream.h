#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.h"

class InputStream : public Stream {
//	public:
//		double m_n;             // �������饹�Ǥ�m_n���������ȷ�̤�����äƤ���
	protected:
		virtual void SetBase();
};

#endif
