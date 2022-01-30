/*编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，并调用void函数输入*/

#include <iostream>

void print(const double &iHour, const double &iMinute);

int main()
{
	int iHour, iMinute;
	std::cout << "Enter the number of hours: ";
	std::cin >> iHour;

	while (iHour > 24 || iHour < 0)
	{
		if (iHour > 24)
		{
			std::cout << "[Error] 输入的小时数大于24!" << std::endl;
		}
		else if (iHour < 0)
		{
			std::cout << "[Error] 输入的小时数小于0!" << std::endl;
		}

		std::cout << "Enter the number of hours correctly: ";
		std::cin >> iHour;
	}

	std::cout << "Enter the number of minutes: ";
	std::cin >> iMinute;

	while (iMinute > 60 || iMinute < 0)
	{
		if (iMinute > 60)
		{
			std::cout << "[Error] 输入的分钟数大于60!" << std::endl;
		}
		else if (iMinute < 0)
		{
			std::cout << "[Error] 输入的分钟数小于0!" << std::endl;
		}
		
		std::cout << "Enter the number of minutes correctly: ";
		std::cin >> iMinute;
	}

	print(iHour, iMinute);

	return 0;
}

void print(const double & iHour, const double & iMinute)
{
	std::cout << "Time: ";
	std::cout << iHour << ":" << iMinute << std::endl;
}
