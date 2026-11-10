#ifndef FIELD_H // Header guard to prevent multiple inclusions of the Field.h file.
#define FIELD_H

class Field 
{
protected:
    double* field; // Pointer to a dynamically allocated array that holds the x, y, and z components of the field vector.

public:
    Field();
    Field(double x, double y, double z);
    Field(const Field& other);
    virtual ~Field(); // Virtual destructor to ensure proper cleanup of derived class objects.

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double getX() const;
    double getY() const;
    double getZ() const;
}; // End of the Field class definition.

#endif