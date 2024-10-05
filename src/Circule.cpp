#include <iostream>
#include <locale.h>
#include "Circule.h"
#include "math.h"
using namespace std;

void Circule::validateRadius(double radius)
{
    if (radius <= 0)
        throw Exception("Error radius");
}

Circule::Circule() : Figure()
{
    std::cout << "--------------Circule Constructor()------------" << std::endl;
    this->radius = new double();
}
Circule::Circule(double x0, double y0, double radius) : Figure(x0, y0)
{
    this->radius = new double();
    this->setRadius(radius);
    std::cout << "--------------Circule Constructor------------" << std::endl;
}
void Circule::setRadius(double radius)
{
    this->validateRadius(radius);
    *this->radius = radius;
}
double Circule::getRadius() const
{
    return *this->radius;
}
void Circule::draw() const
{
    std::cout << "Circule:  ";
    std::cout << "Coords center of circule: " << *this->p0;
    std::cout << "radius: " << *(this->radius) << std::endl;
    std::cout << "Area: " << this->calcArea() << std::endl;
}
double Circule::calcArea() const
{
    return 2*acos(0.0)*pow(*this->radius,2);
}
Circule::~Circule()
{
    delete radius;
    std::cout << "--------------Circule Destructor------------" << std::endl;
}