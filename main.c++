#include <iostream>
#include "Electric.h"
#include "Magnetic.h"

using namespace std;

int main()
{
    // Electric objects
    Electric E1;
    Electric E2(100000, 10.9, 170);

    E1.setX(250);
    E1.setY(125);
    E1.setZ(75);

    Electric E3 = E1 + E2;

    cout << "E1 = " << E1 << endl;
    cout << "E2 = " << E2 << endl;
    cout << "E3 = " << E3 << endl;

    cout << "Magnitude of E2 = "
         << E2.magnitude() << endl;

    cout << "Inner Product of E2 = "
         << E2.innerProduct() << endl;

    cout << endl;

    // Magnetic objects
    Magnetic B1;
    Magnetic B2(3.0, 4.0, 5.0);

    B1.setX(5);
    B1.setY(2);
    B1.setZ(7);

    Magnetic B3 = B1 + B2;

    cout << "B1 = " << B1 << endl;
    cout << "B2 = " << B2 << endl;
    cout << "B3 = " << B3 << endl;

    cout << "Magnitude of B2 = "
         << B2.magnitude() << endl;

    cout << "Unit Vector of B2 = "; 
    B2.unitVector();
    cout << endl;

    return 0;
}