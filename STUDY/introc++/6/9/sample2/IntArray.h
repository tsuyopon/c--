//IntArray.h
#ifndef INTARRAY_H_20070101
#define INTARRAY_H_20070101

class IntArray
{
public:
    //���ԡ����󥹥ȥ饯��
    IntArray(const IntArray &other);

	// [Point] �����黻�ҤΥ����С�����
	void operator=(const IntArray& other);
        
public:
    //���󥹥ȥ饯�����ǥ��ȥ饯��
    IntArray(int size);
    ~IntArray();

public:
    //����Υ��������֤�
    int Size();

public:
    //���ФؤΥ��������ؿ�
    int Get(int i);
    void Set(int i, int value);

private:
    //����ǥå����Υ����å�
    void CheckIndex(int i);

private:
    int *m_array;    //ưŪ����
    int m_size;      //��������ǿ�
};
#endif  //#ifndef INTARRAY_H_20070101
