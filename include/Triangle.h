#pragma once 
#include "figure.h"

class Triangle : public Figure {
private:
    double* a{ 0 };
    double* b{ 0 };
    double* corner{ 0 };
    void validateA(double A);
    void validateB(double B);
    void validateCorner(double corner);
public:
    Triangle();
    Triangle(double x0, double y0, double a, double b, double corner);
    void setA(double a);
    double getA() const;
    void setB(double b);
    double getB() const;
    void setCorner(double corner);
    double getCorner() const;
    virtual void draw() const override;
    virtual double calcArea() const override;
    virtual ~Triangle();
};