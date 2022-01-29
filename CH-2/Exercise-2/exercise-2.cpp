/*输入一个以long为单位的距离，然后将其转换为码（一long等于220码）*/

#include <iostream>

int main()
{
	double rDistance;
	std::cout << "Please enter a distance in longs: ";
	std::cin >> rDistance;

	std::cout << "A distance in yards: " << rDistance * 220 << std::endl;

	return 0;
}