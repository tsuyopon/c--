#include<iostream>
using namespace std;

// C++11$B$G$O%/%i%9$N=i4|2=$rDj5A$9$k$3$H$,$G$-$k$h$&$K$J$j$^$7$?!#(B
class Test {
	int i;
	public:
		Test(int ia) : i(ia) { cout << i << endl; }
		Test() : Test(123) { cout << "set init 123" << endl; }
};

int main(void){
	Test test;
	return 0;
}
