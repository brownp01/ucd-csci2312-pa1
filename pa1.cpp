//
// Created by Paul Brown on 09/06/15.
//

#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Function prototype

void computeArea(double, double, double);  //computes area of 3D triangle

int main() {

    Point a;                //defines Point A from class Point
    Point b;                //defines Point B from class Point
    Point c;                //defines Point C from class Point

    double x = 0;           //user input for x value of a point
    double y = 0;           //user input for y value of a point
    double z = 0;           //user input for z value of a point
    double lengthA = 0;     //value of length a
    double lengthB = 0;     //value of length b
    double lengthC = 0;     //value of length c

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

    c.distanceTo(b);            //member function that calculates distance from Point C to Point B
    lengthA = c.distanceTo(b);  //inserts return value of distance into length of a

    a.distanceTo(c);            //member function that calculates distance from Point A to Point C
    lengthB = a.distanceTo(c);  //inserts return value of distance into length of b

    a.distanceTo(b);            //member function that calculates distance from Point A to Point B
    lengthC = a.distanceTo(b);  //inserts return value of distance into length of c

    computeArea(lengthA, lengthB, lengthC); //call to function that will compute area from length a, b, and c

    return 0;
}


//**************************************************************************
//                      computeArea
//
//  task: This function will calculate the semiperimeter of a 3D triangle,
//        and then calculate the area of a 3D triangle. Area will be
//        outputted to user.
//
//  data in: the lengths of a, b and c with double values.
//  data out: none
//
//**************************************************************************


void computeArea(double l_A, double l_B, double l_C)
{
    double area = 0;    //holds value for area
    double side = 0;    //holds value for semiperimeter

    side = (l_A + l_B + l_C)/2;     //formula to calculate semiperimeter of triangle

    area = sqrt(side * (side - l_A) * (side - l_B) * (side - l_C));     //formula to calculate area of triangle

    cout << setprecision(2) << fixed;   //formatted output to two decimal places
    cout << "The area of your triangle is " << area << endl;
}