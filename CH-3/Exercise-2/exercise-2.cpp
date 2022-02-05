/*
以几英尺几英寸的方式输入身高，并以磅为单位输入体重，输出其BMI。
计算BMI时，以英寸支出用户的身高，并将以英寸为单位的身高转换为以米为单位的身高，将以磅为单位的体重转换为以千克为单位的体重
1英尺 = 12英寸
1英寸 = 0.0254米
1千克 = 2.2磅
*/

#include <iostream>

int main()
{
	/*const常量*/
	const double rInch_Criterion = 12.0;
	const double rMeter_Criterion = 0.0254;
	const double rPound_Criterion = 2.2;

	double rHeight_Feet, rHeight_Inch;
	double rWeight_Pound;

	std::cout << "Please enter your height of feet: _\b";
	std::cin >> rHeight_Feet;

	std::cout << "Please enter your height of Inch: _\b";
	std::cin >> rHeight_Inch;

	std::cout << "Please enter your weight of pound: _\b";
	std::cin >> rWeight_Pound;

	double rHeight = (rHeight_Feet * rInch_Criterion + rHeight_Inch) * rMeter_Criterion;
	double rWeight = rWeight_Pound / rPound_Criterion;

	double rBMI = rWeight / rHeight;
	std::cout << "BMI: " << rBMI << std::endl;

	return 0;
}