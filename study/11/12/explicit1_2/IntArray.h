//IntArray.h
#ifndef INTARRAY_H_20070101
#define INTARRAY_H_20070101

class IntArray
{
public:
    //���ԡ����󥹥ȥ饯��
    IntArray(const IntArray &other);
        
public:
    //���󥹥ȥ饯�����ǥ��ȥ饯��
    explicit IntArray(int size);        // ���ۤΥ��㥹�Ȥ�ư��ʤ��褦��explicit����Ϳ���Ƥ��롣
    ~IntArray();

public:
    //����Υ��������֤�
    int Size() const;                   // Added const(����ˤ������ѿ����ѹ����ʤ����дؿ��Ǥ��뤳�Ȥ�������Ƥ��뤳�Ȥˤʤ�ޤ�)

public:
    //���ФؤΥ��������ؿ�
    int Get(int i) const;               // Added const
    void Set(int i, int value);

private:
    //����ǥå����Υ����å�
    void CheckIndex(int i) const;       // Added const

private:
    int *m_array;    //ưŪ����
    int m_size;      //��������ǿ�
};
#endif  //#ifndef INTARRAY_H_20070101
