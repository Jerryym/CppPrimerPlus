/*
结构CandyBar包含3个成员：
	第一个成员存储糖块的品牌
	第二个成员存储糖块的重量（小数）
	第三个成员存储糖块的卡路里含量（整数）
编写一个程序，声明这个结构
	1、创建一个名为snack的CandyBar变量，并将其成员分别初始化为“Mocha Munch”、2.3和350。初始化应在声明snack时进行
	2、创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择的值
输出显示对应的内容
*/
#include <iostream>
#include <string>

typedef struct CandyBar
{
	std::string SName;//糖块的品牌
	double rWeight;//糖块的重量
	int iCal;//糖块的卡路里含量
}CandyBar;

int main()
{
	CandyBar snack = { "Mocha Munch", 2.3, 350 };
	
	std::cout << "snack: " << snack.SName << ", " << snack.rWeight << ", " << snack.iCal << std::endl;

	CandyBar snacks[3] = {
		{ "Dove", 2.3, 350 },
		{ "FERRERO", 3.3, 340 },
		{ "Lindt", 4.3, 450 }
	};

	for (int i = 0;i < 3;i ++)
	{
		std::cout << "snack-" << i + 1 << ": " << snacks[i].SName << ", " << snacks[i].rWeight << ", " << snacks[i].iCal << std::endl;

	}


	return 0;
}