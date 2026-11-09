#ifndef MAGNETIC_H
#define MAGNETIC_H

#include "Field.h"
#include <iostream>

class Magnetic : public Field
{
public:
    Magnetic();
    Magnetic(double x, double y, double z);
    Magnetic(const Magnetic& other);

    double magnitude() const;

    void unitVector() const;

    Magnetic operator+(const Magnetic& rhs);

    Magnetic& operator=(const Magnetic& rhs);

    friend std::ostream& operator<<(std::ostream& out,
                                    const Magnetic& B);
};

#endif