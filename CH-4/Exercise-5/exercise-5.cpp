/*
�ṹCandyBar����3����Ա��
	��һ����Ա�洢�ǿ��Ʒ��
	�ڶ�����Ա�洢�ǿ��������С����
	��������Ա�洢�ǿ�Ŀ�·�ﺬ����������
��дһ��������������ṹ
	1������һ����Ϊsnack��CandyBar�������������Ա�ֱ��ʼ��Ϊ��Mocha Munch����2.3��350����ʼ��Ӧ������snackʱ����
	2������һ������3��Ԫ�ص�CandyBar���飬�������ǳ�ʼ��Ϊ��ѡ���ֵ
�����ʾ��Ӧ������
*/
#include <iostream>
#include <string>

typedef struct CandyBar
{
	std::string SName;//�ǿ��Ʒ��
	double rWeight;//�ǿ������
	int iCal;//�ǿ�Ŀ�·�ﺬ��
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