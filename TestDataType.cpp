#include<iostream>
using namespace  std;


int main() {
	//list initialization;
	int x{ 1 };//不允许使用1.0形式

	cout << x << endl;
	//static_cast

	cout << 1 / 2 << endl;
	cout << static_cast <double> (1 / 2) << endl;
	cout << static_cast<double>(1) / 2 << endl;
	cout << 1.0f / 2.f << endl;
	
	return 0;



}