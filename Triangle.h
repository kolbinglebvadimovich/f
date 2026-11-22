#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <string>

class Triangle {
protected:
    double sides[3];
    double angles[3];

public:
    Triangle(double a, double b, double c, double A, double B, double C)
        : sides{a, b, c}, angles{A, B, C} {
        validateSides();
        validateAngles();
    }

    virtual ~Triangle() = default;

    void validateSides() {
        if (sides[0] <= 0 || sides[1] <= 0 || sides[2] <= 0) {
            throw GeometricException("Side lengths cannot be zero or negative");
        }
    }

    void validateAngles() {
        if (angles[0] + angles[1] + angles[2] != 180) {
            throw GeometricException("Sum of angles is not 180 degrees");
        }
    }
};

#endif
