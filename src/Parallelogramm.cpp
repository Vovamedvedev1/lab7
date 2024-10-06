#include <iostream>
#include "Parallelogramm.h"
#include "math.h"
using namespace std;

void Parallelogram::validateHeight(double height)
{
    if (height <= 0)
        throw Exception("Error height");
}
void Parallelogram::validateWidth(double width)
{
    if (width <= 0)
        throw Exception("Error width");
}
void Parallelogram::validateCorner(double corner)
{
    if (corner <= 0 || corner > 90)
        throw Exception("Error corner");
}

Parallelogram::Parallelogram() : Figure()
{
    std::cout << "--------------Parallelogram Constructor()------------" << std::endl;
    this->height = new double();
    this->width = new double();
    this->corner = new double();
}
Parallelogram::Parallelogram(double x0, double y0, double height, double width, double corner) : Figure(x0, y0)
{
    this->height = new double();
    this->width = new double();
    this->corner = new double();
    this->setHeigth(height);
    this->setWidth(width);
    this->setCorner(corner);
    std::cout << "--------------Parallelogram Constructor------------" << std::endl;

}
void Parallelogram::setWidth(double width)
{
    this->validateWidth(width);
    *this->width = width;
}
double Parallelogram::getWidth() const
{
    return *this->width;
}
void Parallelogram::setHeigth(double height)
{
    this->validateHeight(height);
    *this->height = height;
}
double Parallelogram::getHeight() const
{
    return *this->height;
}
void Parallelogram::setCorner(double corner)
{
    this->validateCorner(corner);
    *this->corner = corner;
}
double Parallelogram::getCorner() const
{
    return *this->corner;
}
void Parallelogram::draw() const
{
    cout << "Parallelogram:  ";
    cout << "Coordinates of the rendering vertex: " << *this->p0;
    cout << "Width: " << *this->width << "   Height: " << *this->height << "   Corner: " << *this->corner << endl;
}
double Parallelogram::calcArea() const
{
    return (*this->width) * (*this->height) * sin(1.0 * (*this->corner) * 2 * acos(0.0) / 180);
}
Parallelogram::~Parallelogram()
{
    delete height;
    delete width;
    delete corner;
    std::cout << "--------------Parallelogram Destructor------------" << std::endl;
}