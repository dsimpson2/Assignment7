#include "Electric.h"
#include <cmath>

using namespace std;

Electric::Electric() : Field()
{
}

Electric::Electric(double x, double y, double z)
    : Field(x, y, z)
{
}

Electric::Electric(const Electric& other)
    : Field(other)
{
}

double Electric::magnitude() const
{
    return sqrt(field[0] * field[0]
              + field[1] * field[1]
              + field[2] * field[2]);
}

double Electric::innerProduct() const
{
    return field[0] * field[0]
         + field[1] * field[1]
         + field[2] * field[2];
}

Electric Electric::operator+(const Electric& rhs)
{
    return Electric(
        field[0] + rhs.field[0],
        field[1] + rhs.field[1],
        field[2] + rhs.field[2]
    );
}

Electric& Electric::operator=(const Electric& rhs)
{
    if (this != &rhs)
    {
        field[0] = rhs.field[0];
        field[1] = rhs.field[1];
        field[2] = rhs.field[2];
    }

    return *this;
}

ostream& operator<<(ostream& out, const Electric& E)
{
    out << "("
        << E.field[0] << ", "
        << E.field[1] << ", "
        << E.field[2] << ")";

    return out;
}