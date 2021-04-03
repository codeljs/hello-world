#include<iostream>
using namespace  std;


int main() {
	int* p = nullptr;
	int* q{ nullptr };//C++11初始化列表
	p = new int{42};
	q = new int[4];
	char* queue = new char[3] {'a','b','c'};
	for (int i = 0; i < 3; i++) {
		queue[i]++;
		std::cout << queue[i];
	}
	

	delete p;
	delete[] q;
	delete[] queue;
	return 0;



}