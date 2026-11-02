#include "Field.h"

Field::Field() 
{
    field = new double[3]; 

    field[0] = 0.0;
    field[1] = 0.0;
    field[2] = 0.0;
}

Field::Field(double x, double y, double z)
{
    field = new double[3];

    field[0] = x;
    field[1] = y;
    field[2] = z;
}

Field::Field(const Field& other)
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
    field[0] = x;
}

void Field::setY(double y)
{
    field[1] = y;
}

void Field::setZ(double z)
{
    field[2] = z;
}

double Field::getX() const
{
    return field[0];
}

double Field::getY() const
{
    return field[1];
}

double Field::getZ() const
{
    return field[2];
}