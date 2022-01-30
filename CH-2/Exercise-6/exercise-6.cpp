/*
编写一个程序，其中main()调用一个用户定义的函数（以光年值为参数，并返回对应的天文单位值）
转换公式：
			1 光年 = 63240 天文单位
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
