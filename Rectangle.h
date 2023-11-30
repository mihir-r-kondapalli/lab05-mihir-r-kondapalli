#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

public:
    // declare constructor and get/set methods (already done)
    Rectangle(double w, double l);  // constructor
    double getWidth() const;        // accessor for width
    double getLength() const;       // accessor for length
    void setWidth(double);          // mutator for width
    void setLength(double);         // mutator for length

    // DECLARE (const) METHOD TO RETURN AREA OF RECTANGLE

    double area() const;

private:
    double width, length;

}; // end of class definition


#endif

