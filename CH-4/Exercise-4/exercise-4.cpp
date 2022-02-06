/*
要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。
请使用string对象和头文件c\string中的函数
*/

#include <iostream>
#include <string>

int main()
{
	std::string SFirstName;
	std::string SLastName;

	std::cout << "Enter your first name: ";
	getline(std::cin, SFirstName);
	std::cout << "Enter your second name: ";
	getline(std::cin, SLastName);

	std::string SName;
	SName = SLastName + ", " + SFirstName;
	std::cout << "Here's the information in a single string: " << SName << std::endl;

	return 0;
}