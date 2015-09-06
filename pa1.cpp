//
// Created by Paul Brown on 09/06/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void computeArea(double, double, double);

int main() {

    Point a;
    Point b;
    Point c;

    double x = 0;
    double y = 0;
    double z = 0;
    double distA = 0;
    double distB = 0;
    double distC = 0;

    cout << "Please enter coordinates for Point A" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    a.setX(x);
    a.setY(y);
    a.setZ(z);

    cout << "Please enter coordinates for Point B" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    b.setX(x);
    b.setY(y);
    b.setZ(z);

    cout << "Please enter coordinates for Point C" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    c.setX(x);
    c.setY(y);
    c.setZ(z);

    c.distanceTo(b);
    distA = c.distanceTo(b);

    a.distanceTo(c);
    distB = a.distanceTo(c);

    a.distanceTo(b);
    distC = a.distanceTo(b);

    cout << distA << endl;
    cout << distB << endl;
    cout << distC << endl;

    computeArea(distA, distB, distC);

    return 0;
}


void computeArea(double d_A, double d_B, double d_C)
{
    double area = 0;
    double side = 0;

    side = (d_A + d_B + d_C)/2;
    cout << " side = " << side << endl;

    area = sqrt(side * (side - d_A) * (side - d_B) * (side - d_C));

    cout << setprecision(2) << fixed;
    cout << "The area of your triangle is " << area << endl;
}