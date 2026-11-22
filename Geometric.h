#include <string>

class GeometricException {
public:
    GeometricException(const std::string& message) : message_(message) {}
    const std::string& what() const { return message_; }
private:
    std::string message_;
};
