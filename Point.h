// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __point_h
#define __point_h

class Point {     //defines a class of Point

private:
  double x;      //x value of point
  double y;      //y value of point
  double z;      //z value of point

public:
  // Constructors
  Point();                                 // default constructor
  Point(double x, double y, double z);    // three-argument constructor
  double distanceTo(Point &);             //one argument member function using a Point object as input

  // Destructor
  ~Point();

  // Mutator methods
  void setX(double newX);
  void setY(double newY);
  void setZ(double newZ);

  // Accessor methods
  double getX();
  double getY();
  double getZ();
};

#endif // __point_h