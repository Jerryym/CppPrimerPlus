/*
输出示例所示的请求并显示信息：
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
*/

#include <iostream>

int main()
{
	char first_name[20];
	char last_name[20];
	char grade;
	int iAge;

	std::cout << "What is your first name? ";
	std::cin.getline(first_name, 20);
	std::cout << "What is your last name? ";
	std::cin.getline(last_name, 20);
	std::cout << "What letter grade do you deserve? ";
	std::cin >> grade;
	std::cout << "What is your age? ";
	std::cin >> iAge;

	std::cout << "Name: " << last_name << ", " << first_name << std::endl;
	std::cout << "Grade: " << grade+1 << std::endl;
	std::cout << "Age: " << iAge << std::endl;

	return 0;
}