#include<iostream>
using namespace std;
// ��������

extern int a;

//ȫ�ֱ���

int globalVariable = 10;

//���峣��

#define len 10;
#define newline '\n';
int main() {
	// ��������
	int a, b;
	int c;
	float f;
	const double h = 16.0;
	//ʵ�ʳ�ʼ��
	a = 10;
	b = 20;
	c = a + b;
	f = 70.0 / 30;
	cout << "ȫ�ֱ��� + f = " << globalVariable + f << endl;
	cout << "The const variable len is :" << len;
	cout << "and swith to the next line " << newline;
	cout << "The const variable h is :" << h << endl;
	return 0;
}