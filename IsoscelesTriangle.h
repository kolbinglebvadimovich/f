#include "Triangle.h"

class IsoscelesTriangle : public Triangle 
{
public:
    IsoscelesTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle(a, b, c, A, B, C) 
    {
        if (a != b && a != c && b != c) 
        {
            throw GeometricException("Sides are not equal");
        }
    }
};
