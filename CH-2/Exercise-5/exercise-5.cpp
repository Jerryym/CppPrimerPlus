/*
编写一个程序，其中main()调用一个用户定义的函数（以摄氏度温度为参数，并返回对应的华氏温度值）
转换公式：
			华氏温度 = 1.8 * 摄氏温度 + 32.0
*/

#include <iostream>

double Fahrenheit(const double &rCelsius);

int main()
{
	double rCelsius;
	std::cout << "Please enter a Celsius value: ";
	std::cin >> rCelsius;

	std::cout << rCelsius << " degrees Celsius is " << Fahrenheit(rCelsius) << " degrees Fahrenheit." << std::endl;

	return 0;
}

double Fahrenheit(const double & rCelsius)
{
	double rFahrenheit = 1.8 * rCelsius + 32.0;
	return rFahrenheit;
}
