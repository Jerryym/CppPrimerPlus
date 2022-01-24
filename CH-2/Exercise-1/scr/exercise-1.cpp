/*题目：编写一个C++程序， 显示姓名与地址*/

#include <iostream>
#include <string>

int main()
{
	char SName[50];
	char SAddress[100];

	//输入姓名和地址
	std::cout << "Please enter your name: ";
	std::cin.getline(SName, 50);
	std::cout << "Please enter your address: ";
	std::cin.getline(SAddress, 100);

	//输出姓名和地址
	std::cout << "Name: " << SName << std::endl;
	std::cout << "Address: " << SAddress << std::endl;

	return 0;
}