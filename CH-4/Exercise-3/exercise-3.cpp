/*
Ҫ���û���������������Ȼ���������գ�Ȼ�����ʹ��һ�����źͿո��պ���������������洢����ʾ��Ͻ����
��ʹ��char�����ͷ�ļ�cstring�еĺ���
*/

/*#pragma warning(disable:4996)*/
#include <iostream>
#include <cstring>

int main()
{
	char first_name[20];
	char last_name[20];

	std::cout << "Enter your first name: ";
	std::cin.getline(first_name, 20);
	std::cout << "Enter your second name: ";
	std::cin.getline(last_name, 20);

	/*
	strcpy()��strcat()�����Ѿ���΢����Ϊ�ǲ���ȫ�ģ�������������֣�
	1��strcpy->strcpy_s, strcat->strcat_s
	2�����滻����ͷ�ļ��м���
	#pragma warning(disable:4996)
	*/
	char name[50];
	strcpy_s(name, last_name);
	strcat_s(name, ", ");
	strcat_s(name, first_name);

	std::cout << "Here's the information in a single string: " << name << std::endl;

	return 0;
}