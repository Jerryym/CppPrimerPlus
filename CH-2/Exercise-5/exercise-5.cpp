/*
��дһ����������main()����һ���û�����ĺ����������϶��¶�Ϊ�����������ض�Ӧ�Ļ����¶�ֵ��
ת����ʽ��
			�����¶� = 1.8 * �����¶� + 32.0
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
