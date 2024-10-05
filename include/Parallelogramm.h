#pragma once 

#include "figure.h"

class Parallelogram : public Figure {
private:
    double* height{ 0 };
    double* width{ 0 };
    double* corner{ 0 };
    void validateHeight(double height);
    void validateWidth(double width);
    void validateCorner(double corner);
public:
    Parallelogram();
    Parallelogram(double x0, double y0, double height, double width, double corner);
    void setWidth(double width);
    double getWidth() const;
    void setHeigth(double height);
    double getHeight() const;
    void setCorner(double corner);
    double getCorner() const;
    virtual void draw() const override;
    virtual double calcArea() const override;
    virtual ~Parallelogram();
};