#include "Magnetic.h"
#include <cmath>

using namespace std;

Magnetic::Magnetic() : Field()
{
}

Magnetic::Magnetic(double x, double y, double z)
    : Field(x, y, z)
{
}

Magnetic::Magnetic(const Magnetic& other)
    : Field(other)
{
}

double Magnetic::magnitude() const
{
    return sqrt(field[0] * field[0]
              + field[1] * field[1]
              + field[2] * field[2]);
}

void Magnetic::unitVector() const
{
    double mag = magnitude();

    cout << "("
         << field[0] / mag << ", "
         << field[1] / mag << ", "
         << field[2] / mag << ")";
}

Magnetic Magnetic::operator+(const Magnetic& rhs)
{
    return Magnetic(
        field[0] + rhs.field[0],
        field[1] + rhs.field[1],
        field[2] + rhs.field[2]
    );
}

Magnetic& Magnetic::operator=(const Magnetic& rhs)
{
    if (this != &rhs)
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
        << B.field[2] << ")";

    return out;
}