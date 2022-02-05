/*
以度、分、秒的方式输入一个纬度，以度为单位输出该纬度
1度 = 60分
1分 = 60秒
*/

#include <iostream>

int main()
{
	const double rMin_Criterion = 60.0;
	const double rSec_Criterion = 60.0;

	double rDegree, rMin, rSecond;
	std::cout << "Enter a latitude in degrees, minutes, and seconds: " << std::endl;
	std::cout << "First, enter the degrees: ";
	std::cin >> rDegree;
	
	std::cout << "Next, enter the minutes of arc: ";
	std::cin >> rMin;

	std::cout << "Finally, enter the seconds of arc: ";
	std::cin >> rSecond;

	double rResult = rDegree + (rMin / rMin_Criterion) + (rSecond / rSec_Criterion / rMin_Criterion);
	std::cout << rDegree << " degrees, " << rMin << " minutes, " << rSecond << " seconds = " << rResult << " degrees." << std::endl;

	return 0;
}