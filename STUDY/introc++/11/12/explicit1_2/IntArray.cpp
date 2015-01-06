//IntArray.cpp

#include "IntArray.h"
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

//���ԡ����󥹥ȥ饯�������
IntArray :: IntArray(const IntArray &other)
{
    m_array = new int[other.m_size];   //�����ưŪ����, other���֥������Ȥ��ͤ�Ȥ� 
    m_size = other.m_size;                  //other���֥������Ȥ��ͤ򥳥ԡ�s
    
    copy(other.m_array, other.m_array + m_size, m_array);
    
    cout << "���ԡ����󥹥ȥ饯�����ƤФ�ޤ�����" << endl;
}

//���󥹥ȥ饯��
IntArray :: IntArray(int size)
{
    m_array = new int[size];
    m_size = size;

    cout << "���󥹥ȥ饯�����ƤФ�ޤ�����"
            << "���ǿ��� " << m_size << "�Ǥ���" << endl;
}

//�ǥ��ȥ饯��
IntArray :: ~IntArray()
{
    delete [] m_array;

    cout << "�ǥ��ȥ饯�����ƤФ�ޤ���"
            << "���ǿ���" << m_size << "�Ǥ���" << endl;
}

//���ФؤΥ��������ؿ�
int IntArray :: Get (int i) const                // added const
{
    CheckIndex(i);
    return m_array[i];
}

void IntArray :: Set(int i, int value)
{
    CheckIndex(i);
    m_array[i] = value;
}

//����ǥå����Υ����å�
void IntArray :: CheckIndex(int i) const          // added const
{
    if(i >= 0 && i < m_size)
    {
        //����ǥå���������Ǥ�
    }
    else
    {
        cout << "����ǥå����������Ǥ�" << endl
                << "�� : " << i << endl;
        exit(EXIT_FAILURE);
    }
}

int IntArray :: Size() const                 // added const
{
    return m_size;
}
