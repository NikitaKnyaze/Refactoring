#pragma once
#include"shape.h"
class transform
{
public:
	Shape* shift(Shape& sh, int m, int n, int k);
	Shape* scaleX(Shape& sh, int a);
	Shape* scaleY(Shape& sh, int d);
	Shape* scaleZ(Shape& sh, int e);
	Shape* scale(Shape& sh, int s);

};