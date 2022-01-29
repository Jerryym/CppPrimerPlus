/*输入年龄，显示该年龄包含多少个月*/

#include <iostream>

int main()
{
	int iAge;
	std::cout << "Please enter your age: ";
	std::cin >> iAge;

	while (iAge <= 0)
	{
		std::cout << "[Error]: 年龄小于等于0!" << std::endl;
		std::cout << "Please enter your age correctly: ";
		std::cin >> iAge;
	}

	std::cout << "Number of months: " << iAge * 12 << std::endl;

	return 0;
}