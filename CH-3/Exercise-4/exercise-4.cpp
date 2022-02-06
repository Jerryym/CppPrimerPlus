/*
以整数方式输入秒数（使用long或long long变量存储），以天、小时、分钟和秒的方式来显示这段时间。
*/

#include <iostream>

int main()
{
	const int H_IN_D = 24;
	const int M_IN_H = 60; 
	const int S_IN_M = 60;

	long long int iTotalSecond;
	std::cout << "Enter the number of seconds: ";
	std::cin >> iTotalSecond;

	int iDay, iHour, iMin, iSec;
	iSec = iTotalSecond % S_IN_M;
	iMin = iTotalSecond % (S_IN_M * M_IN_H) / M_IN_H;
	iHour = iTotalSecond % (S_IN_M * M_IN_H * H_IN_D) / S_IN_M / M_IN_H;
	iDay = iTotalSecond / (S_IN_M * M_IN_H * H_IN_D);

	std::cout << iTotalSecond << " seconds = " << iDay << " days, " << iHour << " hours, " << iMin << " minutes, " << iSec << " seconds." << std::endl;

	return 0;
}