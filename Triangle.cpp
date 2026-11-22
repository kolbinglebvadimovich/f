#include "Triangle.h"
#include <iostream>

Triangle::Triangle(double a, double b, double c, double A, double B, double C) 
{
    if (a <= 0 || b <= 0 || c <= 0 || A + B + C != 180) 
    {
        throw GeometricException("Ошибка создания треугольника: сумма углов не равна 180");
    }
    sides[0] = a; sides[1] = b; sides[2] = c;
    angles[0] = A; angles[1] = B; angles[2] = C;
    print();
}

void Triangle::print() const 
{
    std::cout << "Треугольник (стороны: " << sides[0] << ", " << sides[1] << ", " << sides[2] << "; углы: " << angles[0] << ", " << angles[1] << ", " << angles[2] << ") создан\n" << std::endl;
}
