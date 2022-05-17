//求勾股定理最长边
#include "pch.h"
#include <iostream>

double h()
{
	double a{};
		std::cout << "请输入a边边长：";
	std::cin >> a;
	return pow(a, 2);				//返回a边平方的值
}

double i()
{
	double b{};
	std::cout << "请输入b边边长：";
	std::cin >> b;
	return pow(b, 2);				//返回b边平方的值
}

void dm(double sq)
{
	std::cout << "c=" << sqrt(sq);
}

int main()
{
	double z{ h() + i() };
	dm(z);
	return 0;
}
