// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
    cout << "Hello World!\n";
    cout << "The size of char is " << sizeof(char) << endl;

    //typedef 声明
    //enum 枚举
    enum programLanguage {C, python = 1,java };
    programLanguage proto = java;
    cout << "The value of proto is: " << proto;

    return 0;

}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单



