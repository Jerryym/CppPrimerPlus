/*
����һ��֤��֧���Լ�����ߣ���λΪӢ�磩, �����ת��ΪӢ�ߺ�Ӣ�硣
ʹ���»����ַ���ָʾ����λ�á�
ʹ��һ��const���ų�������ʾת������
*/

#include <iostream>

int main()
{
	const double rCriterion = 12.0;

	int rHeight;
	std::cout << "Please enter your height:_\b";
	std::cin >> rHeight;

	std::cout << "Your height is: " << rHeight / rCriterion << " feet." << std::endl;

	return 0;
}