/*
�Լ�Ӣ�߼�Ӣ��ķ�ʽ������ߣ����԰�Ϊ��λ�������أ������BMI��
����BMIʱ����Ӣ��֧���û�����ߣ�������Ӣ��Ϊ��λ�����ת��Ϊ����Ϊ��λ����ߣ����԰�Ϊ��λ������ת��Ϊ��ǧ��Ϊ��λ������
1Ӣ�� = 12Ӣ��
1Ӣ�� = 0.0254��
1ǧ�� = 2.2��
*/

#include <iostream>

int main()
{
	/*const����*/
	const double rInch_Criterion = 12.0;
	const double rMeter_Criterion = 0.0254;
	const double rPound_Criterion = 2.2;

	double rHeight_Feet, rHeight_Inch;
	double rWeight_Pound;

	std::cout << "Please enter your height of feet: _\b";
	std::cin >> rHeight_Feet;

	std::cout << "Please enter your height of Inch: _\b";
	std::cin >> rHeight_Inch;

	std::cout << "Please enter your weight of pound: _\b";
	std::cin >> rWeight_Pound;

	double rHeight = (rHeight_Feet * rInch_Criterion + rHeight_Inch) * rMeter_Criterion;
	double rWeight = rWeight_Pound / rPound_Criterion;

	double rBMI = rWeight / rHeight;
	std::cout << "BMI: " << rBMI << std::endl;

	return 0;
}