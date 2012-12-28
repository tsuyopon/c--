//IntArray.h
#ifndef INTARRAY_H_20070101
#define INTARRAY_H_20070101

class IntArray
{
public:
    //コピーコンストラクタ
    IntArray(const IntArray &other);
        
public:
    //コンストラクタ・デストラクタ
    explicit IntArray(int size);        // 暗黙のキャストが動作しないようにexplicitを付与している。
    ~IntArray();

public:
    //配列のサイズを返す
    int Size() const;                   // Added const(これによりメンバ変数を変更しないメンバ関数であることを宣言していることになります)

public:
    //メンバへのアクセス関数
    int Get(int i) const;               // Added const
    void Set(int i, int value);

private:
    //インデックスのチェック
    void CheckIndex(int i) const;       // Added const

private:
    int *m_array;    //動的配列
    int m_size;      //配列の要素数
};
#endif  //#ifndef INTARRAY_H_20070101
