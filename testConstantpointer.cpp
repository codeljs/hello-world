#include<iostream>

using namespace  std;



int main() {
	//常量声明
	const int x = 42;
	//常量不可变
	//x = 21;wrong
	//常量指针所指数据不可变
	const int* p = &x;
	//*p = 2; wrong
	//指针常量不可变
	int y = 10;
	int* const ptr = &y;
	//ptr = &x; wrong ptr是常量不能赋值
	*ptr = 20;
	cout << y << endl;
	//常指针常量
	const int* const s = &y;
	y = 3;

	const char* str = "Hello";

	auto p1 = &y;  // int*
	auto p2 = "world";// const char*
	auto const p3 = "abc";//const char* const
	return 0;



}