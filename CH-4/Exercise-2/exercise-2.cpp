/*修改程序清单4.4，使用C++ string类而不是char数组*/

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