#include "Electric.h" // Include the header file for the Electric class.
#include <cmath> // Include the cmath library for mathematical functions like sqrt.

using namespace std;

Electric::Electric() : Field() // Default constructor that calls the base class Field's default constructor.
{
}

Electric::Electric(double x, double y, double z) // Constructor that initializes the Electric object with specific x, y, z components and calls the base class Field's constructor with these values.
    : Field(x, y, z)
{
}

Electric::Electric(const Electric& other) // Copy constructor that initializes the Electric object with the values from another Electric object.

    : Field(other)
{
}

double Electric::magnitude() const 
{
    return sqrt(field[0] * field[0]
              + field[1] * field[1]
              + field[2] * field[2]); // Calculate the magnitude of the electric field vector using the Euclidean norm formula.
}

double Electric::innerProduct() const
{
    return field[0] * field[0]
         + field[1] * field[1]
         + field[2] * field[2]; // Calculate the inner product (dot product) of the electric field vector with itself, which is equivalent to the square of its magnitude.
}

Electric Electric::operator+(const Electric& rhs)
{
    return Electric(
        field[0] + rhs.field[0],
        field[1] + rhs.field[1],
        field[2] + rhs.field[2]
    ); // Create a new Electric object that represents the component-wise addition of the current Electric object and another Electric object (rhs).
}

Electric& Electric::operator=(const Electric& rhs)
{
    if (this != &rhs)
    {
        field[0] = rhs.field[0];
        field[1] = rhs.field[1];
        field[2] = rhs.field[2]; // Assign the values of the rhs Electric object's components to the current Electric object, ensuring that self-assignment is avoided.
    }

    return *this;
}

ostream& operator<<(ostream& out, const Electric& E)
{
    out << "("
        << E.field[0] << ", "
        << E.field[1] << ", "
        << E.field[2] << ")"; // Overload the output stream operator to print the Electric object's components in a formatted manner (x, y, z).

    return out;
}