#include<iostream>

using namespace  std;



int main() {
	//��������
	const int x = 42;
	//�������ɱ�
	//x = 21;wrong
	//����ָ����ָ���ݲ��ɱ�
	const int* p = &x;
	//*p = 2; wrong
	//ָ�볣�����ɱ�
	int y = 10;
	int* const ptr = &y;
	//ptr = &x; wrong ptr�ǳ������ܸ�ֵ
	*ptr = 20;
	cout << y << endl;
	//��ָ�볣��
	const int* const s = &y;
	y = 3;

	const char* str = "Hello";

	auto p1 = &y;  // int*
	auto p2 = "world";// const char*
	auto const p3 = "abc";//const char* const
	return 0;



}