#include<iostream>
using namespace  std;
int main() {
	int x = 0;
	int y{ 10 };
	int& rx = x;
	rx = 8;
	

	const char* s = "Hello";
	const char* t = "world";

	const char*& ref = s;
	cout << ref << endl;

	ref = t;// s = t;
	cout << s << endl << t << endl;



	return 0;



}