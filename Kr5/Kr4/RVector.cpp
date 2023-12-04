#include "RVector.h"

RVector::RVector() : x(0), y(0), z(0), id(count++) { }
RVector::RVector(double x, double y, double z) : x(x), y(y), z(z), id(count++) { }

RVector::~RVector() {
    count--;
    std::cout << "Vector destroyed\n";
}

RVector::RVector(const RVector& other) : id(count++) {
    x = other.x;
    y = other.y;
    z = other.z;
}

void RVector::display() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

int RVector::count = 0;

int RVector::getCount() {
    return count;
}
int RVector::getID() const {
    return id;
}

RVector RVector::operator+(const RVector& other) const {
    return RVector(x + other.x, y + other.y, z + other.z);
}

RVector RVector::operator-(const RVector& other) const {
    return RVector(x - other.x, y - other.y, z - other.z);
}

RVector RVector::operator*(const RVector& other) const {
    return RVector(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x);
}

RVector RVector::operator=(const RVector& other) {
    if (this != &other) { 
        x = other.x;
        y = other.y;
        z = other.z;
    }
    return *this;
}

