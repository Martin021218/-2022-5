#include "pch.h"
#include <iostream>

double a1()
{
	std::cout << "请输入a边边长：";
	double a11{};
	std::cin >> a11;
	return a11;
}

double b1()
{
	std::cout << "请输入b边边长：";
	double b11{};
	std::cin >> b11;
	return b11;
}

int main()      //求勾股定理最长边c
{
	double a{a1()};
	double b{b1()};

	std::cout << "c∧2=" << a << "∧2+" << b << "∧2\n";				     //   c²＝a²＋b²   
	std::cout << "c=√(" << pow(a, 2) << "+" << pow(b, 2) << ")\n";       //    c²=√(a²＋b²)  
	std::cout << "c=" << sqrt(pow(a, 2) + pow(b, 2));                    //    c=?

	return 0;
}
