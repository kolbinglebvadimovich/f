#include <iostream>
#include <string>

class Quadrilateral 
{
protected:
    double sides[4];

public:
    Quadrilateral(double a, double b, double c, double d)
        : sides{a, b, c, d} 
    {
        validateSides();
    }

    virtual ~Quadrilateral() = default;

    void validateSides() 
    {
        if (sides[0] <= 0 || sides[1] <= 0 || sides[2] <= 0 || sides[3] <= 0) 
        {
            throw GeometricException("Side lengths cannot be zero or negative");
        }
    }
};
