/*
要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
请使用char数组和头文件cstring中的函数
*/

/*#pragma warning(disable:4996)*/
#include <iostream>
#include <cstring>

int main()
{
	char first_name[20];
	char last_name[20];

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, 20);
	std::cout << "Enter your second name: ";
	std::cin.getline(last_name, 20);

	/*
	strcpy()和strcat()现在已经被微软认为是不安全的，解决方法有两种：
	1、strcpy->strcpy_s, strcat->strcat_s
	2、不替换，在头文件中加入
	#pragma warning(disable:4996)
	*/
	char name[50];
	strcpy_s(name, last_name);
	strcat_s(name, ", ");
	strcat_s(name, first_name);

	std::cout << "Here's the information in a single string: " << name << std::endl;

	return 0;
}