1 GeometricException.h

#ifndef GEOMETRICEXCEPTION_H
#define GEOMETRICEXCEPTION_H

#include <stdexcept>

class GeometricException : public std::domain_error
{
public:
    GeometricException(const std::string& msg) : std::domain_error(msg) {}
};

#endif
