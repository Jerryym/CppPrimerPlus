/*��Ŀ����дһ��C++���� ��ʾ�������ַ*/

#include <iostream>
#include <string>

int main()
{
	char SName[50];
	char SAddress[100];

	//���������͵�ַ
	std::cout << "Please enter your name: ";
	std::cin.getline(SName, 50);
	std::cout << "Please enter your address: ";
	std::cin.getline(SAddress, 100);

	//��������͵�ַ
	std::cout << "Name: " << SName << std::endl;
	std::cout << "Address: " << SAddress << std::endl;

	return 0;
}