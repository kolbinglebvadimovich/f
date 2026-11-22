#include "Triangle.h"

class RightTriangle : public Triangle 
{
public:
    RightTriangle(double a, double b, double c, double A, double B, double C)
        : Triangle(a, b, c, A, B, C) 
    {
        if (C != 90) 
        {
            throw GeometricException("Right angle is not 90 degrees");
        }
    }
};
