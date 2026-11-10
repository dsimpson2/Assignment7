#include "Field.h" // Include the header file for the Field class, which is the base class for Electric and Magnetic classes.

Field::Field() 
{
    field = new double[3]; // Allocate memory for a 3D vector to represent the field components (x, y, z).

    field[0] = 0.0;
    field[1] = 0.0;
    field[2] = 0.0;
}

Field::Field(double x, double y, double z) // Constructor that initializes the field components with the provided x, y, z values.
{
    field = new double[3];

    field[0] = x;
    field[1] = y;
    field[2] = z;
}

Field::Field(const Field& other) // Copy constructor that creates a new Field object as a copy of another Field object.
{
    field = new double[3];

    field[0] = other.field[0];
    field[1] = other.field[1];
    field[2] = other.field[2];
}

Field::~Field()
{
    delete[] field;
}

void Field::setX(double x)
{
    field[0] = x; // Set the x-component of the field vector to the provided value.
}

void Field::setY(double y)
{
    field[1] = y; // Set the y-component of the field vector to the provided value.
}

void Field::setZ(double z)
{
    field[2] = z; // Set the z-component of the field vector to the provided value.
}

double Field::getX() const
{
    return field[0]; // Return the x-component of the field vector.
}

double Field::getY() const
{
    return field[1]; // Return the y-component of the field vector.
}

double Field::getZ() const
{
    return field[2]; // Return the z-component of the field vector.
}