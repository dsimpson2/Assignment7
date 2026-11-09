#ifndef ELECTRIC_H
#define ELECTRIC_H

#include "Field.h" 
#include <iostream>

class Electric : public Field 
{
public:
    Electric();
    Electric(double x, double y, double z);
    Electric(const Electric& other);

    double magnitude() const;
    double innerProduct() const;

    Electric operator+(const Electric& rhs);

    Electric& operator=(const Electric& rhs);

    friend std::ostream& operator<<(std::ostream& out,
                                    const Electric& E);
};

#endif