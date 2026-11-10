#ifndef ELECTRIC_H // Header guard to prevent multiple inclusions of the Electric.h file.
#define ELECTRIC_H // Header guard to prevent multiple inclusions of the Electric.h file.

#include "Field.h" // Include the header file for the base class Field, which Electric inherits from.
#include <iostream> // Include the iostream library for input and output stream operations.

class Electric : public Field // Define the Electric class, which inherits from the Field class. This class represents an electric field vector in 3D space.
{
public: // Public member functions for the Electric class, which inherits from the Field class.
    Electric();
    Electric(double x, double y, double z);
    Electric(const Electric& other);

    double magnitude() const;
    double innerProduct() const;

    Electric operator+(const Electric& rhs);

    Electric& operator=(const Electric& rhs);

    friend std::ostream& operator<<(std::ostream& out,
                                    const Electric& E); // Overload the output stream operator to allow printing of Electric objects in a formatted manner (x, y, z).
};

#endif