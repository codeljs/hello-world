// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;

class x {
public:
    int a = 1;
    int b = { 2 };
    int c{ 3 };
    string s1{ 'H','E','L' };
    string s2{ "HELLO" };
    string s3 = { "world" };
    int arr1[3] = { 1,2,3 };
    int arr2[4]{ 1 };
};
int main()
{
    x x1;
    cout << x1.s1 << endl;
    cout << x1.s2 << endl;
    cout << x1.s3 << endl;

}
