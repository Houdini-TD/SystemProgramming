// RVector.h
#pragma once

#include <iostream>

class RVector {
private:
    double x, y, z;
    const int id;
    static int count;

public:
    RVector();
    RVector(double x, double y, double z);
    ~RVector();
    RVector(const RVector& other);

    void display() const;
    
    static int getCount();

    int getID() const;

    RVector operator+(const RVector& other) const;

    RVector operator-(const RVector& other) const;

    RVector operator*(const RVector& other) const;

    RVector operator=(const RVector& other) ;
};