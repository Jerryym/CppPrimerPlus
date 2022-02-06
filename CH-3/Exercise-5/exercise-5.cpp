/*
输入全球当前的人口和美国当前的人数（或其他国家的人口），使用long long 存储，输出该国人口占全球人口的百分比
*/

#include <iostream>

int main()
{
	long long int iGlobal_Population;
	long long int iPopulation;

	std::cout << "Enter the world's population: ";
	std::cin >> iGlobal_Population;
	std::cout << "Enter the population of the US: ";
	std::cin >> iPopulation;

	long double rProportion = static_cast <double> (iPopulation) / static_cast <double> (iGlobal_Population);

	std::cout << "The population of the US is " << rProportion * 100 << "% of the world population." << std::endl;

	return 0;
}