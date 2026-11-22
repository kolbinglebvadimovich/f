#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "GeometricException.h"

#include "GeometricException.h"

class Triangle 
{
private:
    double sides[3];
    double angles[3];
public:
    Triangle(double a, double b, double c, double A, double B, double C);
    void print() const;
};

#endif
