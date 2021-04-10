// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include<string>
using namespace std;


int main() {
	string s{ "Hello" };
	cout << s << endl;
	s.clear();
	//cout << s << endl;
	//char arr[] = { 'w','o','r','l','d' };
	char arr[] = { 'w','o','r','l','d','\0'};
	s += arr;
	cout << s << endl;
	s.assign("hello,world!");
	cout << s << endl;
	s.append("     ");//后面加字符
	//s.append("!");
	
	cout << s << endl;
	s.insert(0, "     ");//前面加字符
	cout << s << endl; 
	s.erase(0, s.find_first_not_of(" \t\n\r"));//删除前面空白
	cout << s << endl;
	s.erase(s.find_last_not_of(" \t\n\r")+1);// 删除后面空白
	s.append("$");
	cout << s << endl;
	//string to int
	s.assign("1024");
	int x = stoi(s);
	cout<<"x=" << x << endl;
	cout << to_string(x) << endl;

}