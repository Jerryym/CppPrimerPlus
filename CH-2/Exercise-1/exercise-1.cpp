/*编写一个C++程序，显示姓名和地址*/

#include <iostream>
#include <string>

int main()
{
	std::string SName;
	std::string SAddress;

	std::cout << "Please enter your name: ";
	getline(std::cin, SName);
	std::cout << "Please enter your Address: ";
	getline(std::cin, SAddress);

	std::cout<<"Name: "<< SName << std::endl;
	std::cout<<"Address: "<< SAddress << std::endl;

	return 0;
}