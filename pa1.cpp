//
// Created by Paul Brown on 09/06/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function prototype

double computeArea(Point &, Point &, Point &);  //computes area of 3D triangle

int main() {

    Point a;                //defines Point A from class Point
    Point b;                //defines Point B from class Point
    Point c;                //defines Point C from class Point

    double x = 0;           //user input for x value of a point
    double y = 0;           //user input for y value of a point
    double z = 0;           //user input for z value of a point
    double area = 0;        //holds value for area


    cout << "Please enter coordinates for Point A" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    a.setX(x);      //inserts value of x into Point A of Point class
    a.setY(y);      //inserts value of y into Point A of Point class
    a.setZ(z);      //inserts value of z into Point A of Point class

    cout << "Please enter coordinates for Point B" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    b.setX(x);      //inserts value of x into Point B of Point class
    b.setY(y);      //inserts value of y into Point B of Point class
    b.setZ(z);      //inserts value of z into Point B of Point class

    cout << "Please enter coordinates for Point C" << endl << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;
    cout << endl;
    c.setX(x);      //inserts value of x into Point C of Point Class
    c.setY(y);      //inserts value of y into Point C of Point Class
    c.setZ(z);      //inserts value of z into Point C of Point Class



    area = computeArea(a, b, c); //call to function that will compute area from Point a, b, and c objects and return it
                                 // to variable area.

    cout << setprecision(2) << fixed;   //formatted output to two decimal places
    cout << "The area of your triangle is " << area << endl;

    return 0;
}


//**************************************************************************
//                      computeArea
//
//  task: This function will calculate the semiperimeter of a 3D triangle,
//        and then calculate the area of a 3D triangle. Area will be
//        outputted to user.
//
//  data in: Points a, b and c from Point Class.
//  data out: none
//
//**************************************************************************


double computeArea(Point &a, Point &b, Point &c)
{
    double s = 0;           //holds value for semiperimeter
    double lengthA = 0;     //value of length a
    double lengthB = 0;     //value of length b
    double lengthC = 0;     //value of length c

    c.distanceTo(b);            //member function that calculates distance from Point C to Point B
    lengthA = c.distanceTo(b);  //inserts return value of distance into length of a

    a.distanceTo(c);            //member function that calculates distance from Point A to Point C
    lengthB = a.distanceTo(c);  //inserts return value of distance into length of b

    a.distanceTo(b);            //member function that calculates distance from Point A to Point B
    lengthC = a.distanceTo(b);  //inserts return value of distance into length of c

    s = (lengthA + lengthB + lengthC)/2;     //formula to calculate semiperimeter of triangle

    return sqrt(s * (s - lengthA) * (s - lengthB) * (s - lengthC));     //formula to calculate area of triangle
                                                                        //returns value to main


}