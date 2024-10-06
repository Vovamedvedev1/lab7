#include <iostream>
#include "Triangle.h"
#include "math.h"
using namespace std;

void Triangle::validateA(double A)
{
    if (A <= 0)
        throw Exception("Error a");
}
void Triangle::validateB(double B)
{
    if (B <= 0)
        throw Exception("Error b");
}
void Triangle::validateCorner(double corner)
{
    if (corner <= 0 || corner >= 180)
        throw Exception("Error corner");
}
Triangle::Triangle() : Figure()
{
    std::cout << "--------------Triangle Constructor()------------" << std::endl;
    this->a = new double();
    this->b = new double();
    this->corner = new double();
}
Triangle::Triangle(double x0, double y0, double a, double b, double corner) : Figure(x0, y0)
{
    this->a = new double();
    this->b = new double();
    this->corner = new double();
    this->setA(a);
    this->setB(b);
    this->setCorner(corner);
    std::cout << "--------------Triangle Constructor------------" << std::endl;
}
void Triangle::setA(double a)
{
    this->validateA(a);
    *this->a = a;
}
double Triangle::getA() const
{
    return *this->a;
}
void Triangle::setB(double b)
{
    this->validateB(b);
    *this->b = b;
}
double Triangle::getB() const
{
    return *this->b;
}
void Triangle::setCorner(double corner)
{
    this->validateCorner(corner);
    *this->corner = corner;
}
double Triangle::getCorner() const
{
    return *this->corner;
}
void Triangle::draw() const 
{
    std::cout << "Triangle:  ";
    std::cout << "Coordinates of the rendering vertex: " << *this->p0;
    std::cout << "a: " << *(this->a) << "   b: " << *(this->b) << "   Corner: " << *(this->corner) << std::endl;
}
double Triangle::calcArea() const
{
    return 0.5 * (*(this->a)) * (*this->b) * sin(1.0 * (*this->corner) * 2 * acos(0.0) / 180);
}
Triangle::~Triangle()
{
    delete a;
    delete b;
    delete corner;
    std::cout << "--------------Triangle Destructor------------" << std::endl;
}