/*�������䣬��ʾ������������ٸ���*/

#include <iostream>

int main()
{
	int iAge;
	std::cout << "Please enter your age: ";
	std::cin >> iAge;

	while (iAge <= 0)
	{
		std::cout << "[Error]: ����С�ڵ���0!" << std::endl;
		std::cout << "Please enter your age correctly: ";
		std::cin >> iAge;
	}

	std::cout << "Number of months: " << iAge * 12 << std::endl;

	return 0;
}