/*
Ҫ���û���������������Ȼ���������գ�Ȼ�����ʹ��һ�����źͿո��պ���������������洢����ʾ��Ͻ����
��ʹ��string�����ͷ�ļ�c\string�еĺ���
*/

#include <iostream>
#include <string>

int main()
{
	std::string SFirstName;
	std::string SLastName;

	std::cout << "Enter your first name: ";
	getline(std::cin, SFirstName);
	std::cout << "Enter your second name: ";
	getline(std::cin, SLastName);

	std::string SName;
	SName = SLastName + ", " + SFirstName;
	std::cout << "Here's the information in a single string: " << SName << std::endl;

	return 0;
}