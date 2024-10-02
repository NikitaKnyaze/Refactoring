#pragma once
#include<string>
#include<vector>

struct Point
{
	int x, y, z;
	double radius, height;
};

class Shape
{
public:
	 Shape() {};
	virtual ~Shape() {}
	virtual double getVolume() const = 0;
	virtual double getSquare() const = 0;
	virtual Shape* clone() = 0;
	virtual void shift(int m, int n, int k) = 0;
	virtual void scaleX(int a) = 0;
	virtual void scaleY(int d) = 0;
	virtual void scaleZ(int e) = 0;
	virtual void scale(int s) = 0;
};

class Line : public Shape {
public:
	Line(Point p1, Point p2);
	Line* clone();
	double getVolume()  const override;
	double getSquare()  const override;
	void shift(int m, int n, int k) override;
	void scaleX(int a) override;
	void scaleY(int d) override;
	void scaleZ(int e) override;
	void scale(int s) override;
private:
	Point p1, p2;
};

class Sq : public Shape {
public:
	Sq(Point p1, Point p2, Point p3, Point p4);
	Sq* clone();
	double getVolume()  const override;
	double getSquare()  const override;
	void shift(int m, int n, int k) override;
	void scaleX(int a) override;
	void scaleY(int d) override;
	void scaleZ(int e) override;
	void scale(int s) override;
private:
	Point p1, p2, p3, p4;
};

class Cube : public Shape {
public:
	Cube(std::vector<Point> p);
	Cube* clone();
	double getVolume() const override;
	double getSquare() const override;
	void shift(int m, int n, int k) override;
	void scaleX(int a) override;
	void scaleY(int d) override;
	void scaleZ(int e) override;
	void scale(int s) override;
private:
	std::vector<Point> points;
};

class Circle : public Shape {
public:
	Circle(Point p);
	Circle* clone();
	double getVolume() const override;
	double getSquare() const override;
	void shift(int m, int n, int k) override;
	void scaleX(int a) override;
	void scaleY(int d) override;
	void scaleZ(int e) override;
	void scale(int s) override;
private:
	Point p1;
};

class Cylinder : public Shape {
public:
	Cylinder(Point p);
	Cylinder* clone();
	double getVolume() const override;
	double getSquare() const override;
	void shift(int m, int n, int k) override;
	void scaleX(int a) override;
   void scaleY(int d) override;
	void scaleZ(int e) override;
	void scale(int s) override;
private:
	Point p1;
};