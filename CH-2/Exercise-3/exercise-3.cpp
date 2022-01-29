/*
使用3个用户定义的函数（包括main()），并生成以下输出：
Three blind mice
Three blind mice
See how they run
See how they run
其中一个函数调用两次，生成前两行
里一个函数调用两次，生成后两行
*/

#include <iostream>
#include "Funcitons.h"

int main()
{
	print_1();
	print_1();
	print_2();
	print_2();

	return 0;
}