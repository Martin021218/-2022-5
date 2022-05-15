#include "pch.h"
#include <iostream>

int main()      //求勾股定理最长边c
{
    double a{};
    double b{};
    double a1{};
    double b1{};
    double c{};
    double c1{};

    std::cin >> a >> b;
    a1 = pow(a, 2);
    b1 = pow(b, 2);
    c1 = a1 + b1;
    c = sqrt(c1);

    std::cout << "a=" << a << "     b=" << b << "\n";        //eg.a=?      b=?
    std::cout << "c∧2=" << a << "∧2+" << b << "∧2\n";       //   c²＝a²＋b²   
    std::cout << "c=√(" << a1 << "+" << b1 << ")\n";        //    c²=√(a²＋b²)  
    std::cout << "c=" << c;                                 //    c=?

    return 0;
}