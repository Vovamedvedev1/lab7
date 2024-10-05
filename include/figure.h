#pragma once

class Exception : public std::exception
{
protected:
    std::string msg;
public:
    Exception(const char* msg) noexcept;
    const char* what() const noexcept override;
};


struct Point
{
    double x{0};
    double y{0};
    Point() {};
    Point(double x, double y) : x(x), y(y) {}
    friend std::ostream& operator << (std::ostream& os, const Point pt);
};


class Figure {
protected:
    Point* p0{ nullptr };
public:
    Figure();
    Figure(double x0, double y0);
    virtual double calcArea() const = 0;
    virtual void draw() const = 0;
    virtual ~Figure();
};
