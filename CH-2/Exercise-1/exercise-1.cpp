/*��дһ��C++������ʾ�����͵�ַ*/

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