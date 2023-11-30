#include <iostream>
using namespace std;



#include "Rectangle.h"

// implement constructor
Rectangle::Rectangle(double w, double l) : width(w), length(l) {
} // no constructor body: uses initialization list

// implement accessors and mutators for width and length
double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double l) {
    length = l;
}

// IMPLEMENT THE AREA METHOD HERE

double Rectangle::getArea() const
{
    return width * length;
}

