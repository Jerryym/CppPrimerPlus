/*����һ����longΪ��λ�ľ��룬Ȼ����ת��Ϊ�루һlong����220�룩*/

#include <iostream>

int main()
{
	double rDistance;
	std::cout << "Please enter a distance in longs: ";
	std::cin >> rDistance;

	std::cout << "A distance in yards: " << rDistance * 220 << std::endl;

	return 0;
}