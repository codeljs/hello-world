#include<iostream>
using namespace std;
// 变量声明

extern int a;

//全局变量

int globalVariable = 10;

//定义常量

#define len 10;
#define newline '\n';
int main() {
	// 变量定义
	int a, b;
	int c;
	float f;
	const double h = 16.0;
	//实际初始化
	a = 10;
	b = 20;
	c = a + b;
	f = 70.0 / 30;
	cout << "全局变量 + f = " << globalVariable + f << endl;
	cout << "The const variable len is :" << len;
	cout << "and swith to the next line " << newline;
	cout << "The const variable h is :" << h << endl;
	return 0;
}