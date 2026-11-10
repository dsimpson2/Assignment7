#include "Magnetic.h"
#include <cmath>

using namespace std;

Magnetic::Magnetic() : Field() // Default constructor that calls the base class Field's default constructor.
{
}

Magnetic::Magnetic(double x, double y, double z)
    : Field(x, y, z) // Constructor that initializes the Magnetic object with specific x, y, z components and calls the base class Field's constructor with these values.
{
}

Magnetic::Magnetic(const Magnetic& other)
    : Field(other) // Call the base class copy constructor to initialize the Magnetic object with the values from another Magnetic object.
{
}

double Magnetic::magnitude() const
{
    return sqrt(field[0] * field[0]
              + field[1] * field[1]
              + field[2] * field[2]); // Calculate the magnitude of the magnetic field vector using the Euclidean norm formula.
}

void Magnetic::unitVector() const
{
    double mag = magnitude();

    cout << "("
         << field[0] / mag << ", "
         << field[1] / mag << ", "
         << field[2] / mag << ")"; // Print the unit vector in the direction of the magnetic field vector by dividing each component by the magnitude.
}

Magnetic Magnetic::operator+(const Magnetic& rhs)
{
    return Magnetic(
        field[0] + rhs.field[0],
        field[1] + rhs.field[1],
        field[2] + rhs.field[2]
    ); // Create a new Magnetic object that represents the component-wise addition of the current Magnetic object and another Magnetic object (rhs).
}

Magnetic& Magnetic::operator=(const Magnetic& rhs)
{
    if (this != &rhs) // Check for self-assignment to avoid unnecessary work and potential issues.
    {
        field[0] = rhs.field[0];
        field[1] = rhs.field[1];
        field[2] = rhs.field[2];
    }

    return *this;
}

ostream& operator<<(ostream& out, const Magnetic& B)
{
    out << "("
        << B.field[0] << ", " 
        << B.field[1] << ", "
        << B.field[2] << ")"; // Overload the output stream operator to print the Magnetic object's components in a formatted manner (x, y, z).

    return out;
}