#ifndef MAGNETIC_H
#define MAGNETIC_H

#include "Field.h"
#include <iostream>

class Magnetic : public Field
{
public:
    Magnetic();
    Magnetic(double x, double y, double z); // Constructor that initializes the Magnetic object with specific x, y, z components and calls the base class Field's constructor with these values.
    Magnetic(const Magnetic& other); // Copy constructor that initializes the Magnetic object with the values from another Magnetic object.

    double magnitude() const; // Function to calculate the magnitude of the magnetic field vector using the Euclidean norm formula.

    void unitVector() const; // Function to print the unit vector in the direction of the magnetic field vector.

    Magnetic operator+(const Magnetic& rhs); // Overload the addition operator to allow component-wise addition of two Magnetic objects.

    Magnetic& operator=(const Magnetic& rhs); // Assignment operator overload to allow assignment of one Magnetic object to another.

    friend std::ostream& operator<<(std::ostream& out,
    const Magnetic& B); // Overload the output stream operator to allow printing of Magnetic objects in a formatted manner (x, y, z).
};

#endif