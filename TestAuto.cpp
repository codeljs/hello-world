#include<iostream>
#include<typeinfo>
using namespace  std;

//auto 变量必须在定义的时候初始化，定义在同一个auto序列的变量类型保持一致
//如果初始化类型是引用或者CONST，则会去除引用和常量的语义，除非是 auto& 的形式
//初始化表达式为数组时，auto关键字推到类型为指针；若为auto& a = （数组名）形式，则推导为属组形式。
//auto can be used as the type of return value or reference value of the function

auto max(int x, int y){
	return x > y ? x : y;


}
int main() {
	auto x = 3;
	auto y{ 42 };
	
	// auto x1{ 1 }, x2{ 2 }, x3{ 'z' }; wrong

	int y1{ 42 }, & y2{ y1 };
	auto y3 = y2;
	auto& y4 = y2;
	cout << typeid(y3).name() << endl;

	int p[3]{ 1,2,3 };
	auto p1 = p; // p1 is a pointer
	auto& p2 = p; // p2 is an array

	cout << max(x, y) << endl;
	return 0;



}