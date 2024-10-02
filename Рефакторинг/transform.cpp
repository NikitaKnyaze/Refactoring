#include "transform.h"

Shape* transform::shift(Shape& sh, int m, int n, int k)
{
	Shape* copy = sh.clone(); 
	copy->shift(m, n, k);
	return copy; 
}

Shape* transform::scaleX(Shape& sh, int a)
{
	Shape* copy = sh.clone();
	copy->scaleX(a);
	return copy;
}

Shape* transform::scaleY(Shape& sh, int d)
{
	Shape* copy = sh.clone();
	copy->scaleY(d);
	return copy;
}

Shape* transform::scaleZ(Shape& sh, int e)
{
	Shape* copy = sh.clone();
	copy->scaleZ(e);
	return copy;
}

Shape* transform::scale(Shape& sh, int s)
{
	Shape* copy = sh.clone();
	copy->scale(s);
	return copy;
}