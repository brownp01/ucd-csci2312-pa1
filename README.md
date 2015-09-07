## Programming Assignment 1: Find the area of a 3D triangle

For this program, a 3D triangle is inputted by user, area is calculated and results outputted to user. 

## 3D Point Class

The 3D Point Class is created using the following functions and variables:
 
Class Point

Private:

double x, double y, and double z.

Public:

Point () as a default constructor
Point (double x, double y, double z) as a 3 argument constructor.
double distanceTo(Point &) as a one argument function to calculate the distance between two points. It accepts a Point object. 

Mutators

void setX(double newX);
void setY(double newY);
void setZ(double newZ);

Accessors
double getX();
double getY();
double getZ();

##IMPLEMENTATION

1. User inputs x, y, z values for a given point.
2. Inputs are inserted into the Point object.
3. Distance is calculated between two points by utilizing the distanceTo member function. Length for each side is assigned. 
4. computeArea function is called to determine the area of the 3D triangle by passing the values of length for a, b and c.
5. Area is outputted to user. 
6. Programs ends.




7.  Go back and test <tt>computeArea</tt> with several boundary and/or extreme cases to make sure your implementation is robust for all triangles, including degenerate ones. Things you might try:

*   Triangles with no area - all three points on the same line
*   Triangles where two points are the same
*   Triangles where all three points are the same
*   Triangles with negative coordinate values
*   etc.

In software-engineering parlance, these degenerate cases are called "edge cases" or "corner cases," because they test combinations of inputs that may be rare, but still possible. Usually, you want to start out by seeing if your program can handle simple cases that will expose obvious issues. Once your program can handle these, then you move on to the more subtle test scenarios.

8.  Update the README.md file in your local repository with a description of your 3D Point class. You can use this file as a guide.

9.  Commit all code changes to your local Github repository, then push the changes to the master repository on Github.

10. Submit the URL of your CSCI 2312 repository on Canvas.

