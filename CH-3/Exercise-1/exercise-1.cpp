/*
输入一个证书支出自己的身高（单位为英寸）, 将身高转换为英尺和英寸。
使用下划线字符来指示输入位置。
使用一个const符号常量来表示转换因子
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