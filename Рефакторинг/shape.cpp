#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>

Line::Line(Point p1, Point p2) : p1(p1), p2(p2){}

double Line::getVolume() const  { return 0.0; }
double Line::getSquare() const  { return 0.0; }

void Line::shift(int m, int n, int k)
{
   p1.x += m;
   p1.y += n;
   p2.x += m;
   p2.y += n;
}

void Line::scaleX(int a)
{
   p1.x *= a;
   p2.x *= a;
}

void Line::scaleY(int d)
{
   p1.y *= d;
   p2.y *= d;
}

void Line::scaleZ(int e) {}

void Line::scale(int s)
{
   p1.x /= s;
   p1.y /= s;
   p2.x /= s;
   p2.y /= s;
}

Line* Line::clone() 
{
   return new Line(*this);
}

Sq::Sq(Point p1, Point p2, Point p3, Point p4) : p1(p1), p2(p2), p3(p3), p4(p4){}

double Sq::getSquare() const 
{
   double sideLength = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
   double square = sideLength * sideLength;
   return square;
}

double Sq::getVolume() const { return 0.0; }

void Sq::shift(int m, int n, int k)
{
   p1.x += m;
   p1.y += n;
   p2.x += m;
   p2.y += n;
   p3.x += m;
   p3.y += n;
   p4.x += m;
   p4.y += n;
}

void Sq::scaleX(int a)
{
   p1.x *= a;
   p2.x *= a;
   p3.x *= a;
   p4.x *= a;
}

void Sq::scaleY(int d)
{
   p1.y *= d;
   p2.y *= d;
   p3.y *= d;
   p4.y *= d;
}

void Sq::scaleZ(int e) {}

void Sq::scale(int s)
{
   p1.x /= s;
   p1.y /= s;
   p2.x /= s;
   p2.y /= s;
   p3.x /= s;
   p3.y /= s;
   p4.x /= s;
   p4.y /= s;
}

Sq* Sq::clone()
{
   return new Sq(*this);
}

Cube::Cube(std::vector<Point> p) : points(p) {}

double Cube::getSquare() const {
   double sideLength = sqrt(pow(points[1].x - points[0].x, 2) + pow(points[1].y - points[0].y, 2));
   double square = 6 * pow(sideLength, 2);
   return square;
}

double Cube::getVolume() const 
{
   double sideLength = sqrt(pow(points[1].x - points[0].x, 2) + pow(points[1].y - points[0].y, 2));
   double volume = sideLength * sideLength * sideLength;
   return volume;
}

void Cube::shift(int m, int n, int k)
{
   for (int i{ 0 }; i < 8; ++i)
   {
      points[i].x += m;
      points[i].y += n;
      points[i].z += k;
   }
}

void Cube::scaleX(int a)
{
   for (int i{ 0 }; i < 8; ++i)
   {
      points[i].x *= a;
   }
}

void Cube::scaleY(int d)
{
   for (int i{ 0 }; i < 8; ++i)
   {
      points[i].y *= d;
   }
}

void Cube::scaleZ(int e)
{
   for (int i{ 0 }; i < 8; ++i)
   {
      points[i].z *= e;
   }
}

void Cube::scale(int s)
{
   for (int i{ 0 }; i < 8; ++i)
   {
      points[i].x /= s;
      points[i].y /= s;
      points[i].z /= s;
   }
}

Cube* Cube::clone()
{
   return new Cube(*this);
}

Circle::Circle(Point p1) {}

double Circle::getSquare() const {
   double square = M_PI * pow(p1.radius,2);
   return square;
}

double Circle::getVolume() const { return 0.0; }

void Circle::shift(int m, int n, int k)
{
   p1.x += m;
   p1.y += n;
}

void Circle::scaleX(int a)
{
   p1.x *= a;
}

void Circle::scaleY(int d)
{
   p1.y *= d;
}

void Circle::scaleZ(int e) {}

void Circle::scale(int s)
{
   p1.x /= s;
   p1.y /= s;
}

Circle* Circle::clone()
{
   return new Circle(*this);
}

Cylinder::Cylinder(Point p1) {}

double Cylinder::getSquare() const {
   double square = M_PI * pow(p1.radius, 2) + (2 * p1.radius*p1.height);
   return square;
}

double Cylinder::getVolume() const {
   double volume = M_PI * pow(p1.radius, 2) * p1.height;
   return volume;
}

void Cylinder::shift(int m, int n, int k) 
{
   p1.x += m;
   p1.y += n;
}

void Cylinder::scaleX(int a)
{
   p1.x *= a;
}

void Cylinder::scaleY(int d)
{
   p1.y *= d;
}

void Cylinder::scaleZ(int e) {}

void Cylinder::scale(int s)
{
   p1.x /= s;
   p1.y /= s;
}

Cylinder* Cylinder::clone()
{
   return new Cylinder(*this);
}