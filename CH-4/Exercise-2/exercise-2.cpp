/*�޸ĳ����嵥4.4��ʹ��C++ string�������char����*/

#include <iostream>
#include <string>

int main()
{
	std::string SName;
	std::string SDessert;

	std::cout << "Enter your name: " << std::endl;
	getline(std::cin, SName);

	std::cout << "Enter your favorite dessert: " << std::endl;
	getline(std::cin, SDessert);

	std::cout << "I have some delicious " << SDessert << " for you, " << SName << "." << std::endl;

	return 0;
}