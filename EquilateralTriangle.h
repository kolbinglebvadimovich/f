#include "Triangle.h"

class EquilateralTriangle : public Triangle 
{
public:
    EquilateralTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle(a, b, c, A, B, C) 
    {
        if (a != b || b != c || a != c) 
        {
            throw GeometricException("Sides are not equal");
        }
    }
};
