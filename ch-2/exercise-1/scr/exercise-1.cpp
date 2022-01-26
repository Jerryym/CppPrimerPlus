/*编写一个C++程序，显示姓名和地址*/

#include <iostream>

int main()
{
	char sName[50];
	char sAddress[100];
	std::cout << "Please enter your Name: ";
	std::cin.getline(sName, 50);

	std::cout << "Please enter your Address: ";
	std::cin.getline(sAddress, 100);

	std::cout << "Your Name: " << sName << std::endl;
	std::cout << "Your Address: " << sAddress << std::endl;

	return 0;
}