#include<iostream>
using namespace  std;


int main() {
	int* p = nullptr;
	int* q{ nullptr };//C++11初始化列表
	p = new int{42};
	q = new int[4];
	cout << "Before: p is " << *p<<endl;
	*p = 24;
	cout << "After: p is " << *p << endl;
	
	for (int i = 0; i < 4; i++) {
		*(q+i) = i+1;
		cout << q[i]<<endl; //cout<<*(q+i)<<endl;
	}


	delete p;
	delete[] q;
	return 0;



}