#include "Quadrilateral.h"

class Rectangle : public Quadrilateral 
{
public:
    Rectangle(double a, double b, double c, double d)
        : Quadrilateral(a, b, c, d) 
    {
        if (a != c && b != d) 
        {
            throw GeometricException("Opposite sides are not equal");
        }
    }
}
