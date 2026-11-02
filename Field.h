#ifndef FIELD_H
#define FIELD_H

class Field 
{
protected:
    double* field;

public:
    Field();
    Field(double x, double y, double z);
    Field(const Field& other);
    virtual ~Field();

    void setX(double x);
    void setY(double y);
    void setZ(double z);

    double getX() const;
    double getY() const;
    double getZ() const;
};

#endif