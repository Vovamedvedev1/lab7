#include <fstream>
#include <iostream>
#include <string>
#include <string.h>
#include "figure.h"
#include "cmath"
using namespace std;

Exception::Exception(const char* msg) noexcept
{
	this->msg = msg;
}

const char* Exception::what() const noexcept
{
	return this->msg.c_str();
}

std::ostream& operator << (std::ostream& os, const Point pt)
{
    os << "(" << pt.x << ", " << pt.y << ")" << std::endl;
    return os;
}


Figure::Figure()
{
    std::cout << "--------------делегированный Figure Constructor без параметров------------" << std::endl;
    this->p0 = new Point();
}
Figure::Figure(double x0, double y0) : Figure()
{
    std::cout << "--------------Figure Constructor------------" << std::endl;
    *this->p0 = Point(x0, y0);
}
Figure::~Figure()
{
    std::cout << "--------------Figure destructor------------" << std::endl;
    delete p0;
}

