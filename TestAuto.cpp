#include<iostream>
#include<typeinfo>
using namespace  std;

//auto ���������ڶ����ʱ���ʼ����������ͬһ��auto���еı������ͱ���һ��
//�����ʼ�����������û���CONST�����ȥ�����úͳ��������壬������ auto& ����ʽ
//��ʼ�����ʽΪ����ʱ��auto�ؼ����Ƶ�����Ϊָ�룻��Ϊauto& a = ������������ʽ�����Ƶ�Ϊ������ʽ��
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