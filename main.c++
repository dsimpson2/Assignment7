#include <iostream> 
#include <cmath> 

using namespace std; 

class Electric_Field 
{
private:
    double *E;

public:
    Electric_Field() 
    {
        E = new double[3];
        E[0] = 0.0; 
        E[1] = 0.0;
        E[2] = 0.0;
    }

    Electric_Field(double Ex, double Ey, double Ez) 
    {
        E = new double[3];
        E[0] = Ex;
        E[1] = Ey;
        E[2] = Ez;
    }

    ~Electric_Field() 
    {
        delete[] E;
    }

    void setX(double Ex) { E[0] = Ex; }
    void setY(double Ey) { E[1] = Ey; }
    void setZ(double Ez) { E[2] = Ez; }

    double getX() { return E[0]; }
    double getY() { return E[1]; }
    double getZ() { return E[2]; }

    double calculateMagnitude()
    {
        return sqrt(E[0] * E[0] +
                    E[1] * E[1] +
                    E[2] * E[2]);
    }

    double calculateInnerProduct()
    {
        return E[0] * E[0] +
               E[1] * E[1] +
               E[2] * E[2];
    }
};

class Magnetic_Field
{
private:
    double *B;

public:
    
    Magnetic_Field()
    {
        B = new double[3];
        B[0] = 0.0;
        B[1] = 0.0;
        B[2] = 0.0;
    }

    Magnetic_Field(double Bx, double By, double Bz)
    {
        B = new double[3];
        B[0] = Bx;
        B[1] = By;
        B[2] = Bz;
    }
    
    ~Magnetic_Field()
    {
        delete[] B;
    }

    
    void setX(double Bx) { B[0] = Bx; }
    void setY(double By) { B[1] = By; }
    void setZ(double Bz) { B[2] = Bz; }

    
    double getX() { return B[0]; }
    double getY() { return B[1]; }
    double getZ() { return B[2]; }

    
    double calculateMagnitude()
    {
        return sqrt(B[0] * B[0] +
                    B[1] * B[1] +
                    B[2] * B[2]);
    }

    
    void calculateUnitVector()
    {
        double mag = calculateMagnitude();

        cout << "Unit Vector = ("
             << B[0] / mag << ", "
             << B[1] / mag << ", "
             << B[2] / mag << ")" << endl;
    }
};

int main()
{
    
    Electric_Field E_default;
    Electric_Field E_components(1e5, 10.9, 1.7e2);

    Electric_Field E_setter;
    E_setter.setX(250.0);
    E_setter.setY(125.0);
    E_setter.setZ(75.0);

    
    Magnetic_Field B_default;
    Magnetic_Field B_components(3.5, 4.2, 1.8);

    Magnetic_Field B_setter;
    B_setter.setX(5.0);
    B_setter.setY(2.0);
    B_setter.setZ(7.0);

    
    cout << "Electric Field Magnitude (components): "
         << E_components.calculateMagnitude() << endl;

    cout << "Electric Field Magnitude (setter): "
         << E_setter.calculateMagnitude() << endl;

    cout << endl;

    cout << "Magnetic Field Magnitude (components): "
         << B_components.calculateMagnitude() << endl;

    cout << "Magnetic Field Magnitude (setter): "
         << B_setter.calculateMagnitude() << endl;

    cout << endl;

    cout << "Electric Field Inner Product: "
         << E_components.calculateInnerProduct() << endl;

    cout << "Magnetic Field Unit Vector:" << endl;
    B_components.calculateUnitVector(); 

    return 0;
}  