/*
��дһ����������main()����һ���û�����ĺ������Թ���ֵΪ�����������ض�Ӧ�����ĵ�λֵ��
ת����ʽ��
			1 ���� = 63240 ���ĵ�λ
*/

#include <iostream>

double Compute(const double &rLight_year);

int main()
{
	double rLight_year;
	std::cout << "Enter the number of light years: ";
	std::cin >> rLight_year;

	std::cout << rLight_year << " light years = " << Compute(rLight_year) << " astronomical units." << std::endl;

	return 0;
}

double Compute(const double & rLight_year)
{
	double rResult = rLight_year * 63240;
	return rResult;
}
