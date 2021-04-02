#include<iostream>
using namespace  std;

void swap(int& x, int& y) {
	int t = 0;
	t = x; x = y; y = t;
	
}
int main() {
	int a = 1, b = 22;
	cout << "before calling swap(): a " << a << " b " << b<<endl;
	swap(a, b);
	cout << "after calling swap(): a " << a << " b " << b<<endl;




	return 0;



}