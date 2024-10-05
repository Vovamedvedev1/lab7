#pragma once
#include "Figure.h"

class Circule : public Figure {
private:
    double* radius{ 0 };
    void validateRadius(double radius);
public:
    Circule();
    Circule(double x0, double y0, double radius);
    void setRadius(double radius);
    double getRadius() const;
    virtual void draw() const override;
    virtual double calcArea() const override;
    virtual ~Circule();
};
