/*��дһ������Ҫ���û�����Сʱ���ͷ���������main()�����У���������ֵ���ݸ�һ��void������������void��������*/

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
			std::cout << "[Error] �����Сʱ������24!" << std::endl;
		}
		else if (iHour < 0)
		{
			std::cout << "[Error] �����Сʱ��С��0!" << std::endl;
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
			std::cout << "[Error] ����ķ���������60!" << std::endl;
		}
		else if (iMinute < 0)
		{
			std::cout << "[Error] ����ķ�����С��0!" << std::endl;
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
