
#include <iostream>
#include "transform.h"

int main()
{
   Point p1, p2, p3, p4;
   p1.x = 2; p1.y = 2;
   p2.x = 6; p2.y = 2;
   p3.x = 2; p3.y = 6;
   p4.x = 6; p4.y = 6;

   Shape* shape = new Sq(p1, p2, p3, p4);

   std::cout << "Shape sq square= " << shape->getSquare() << " Shape sq volume= " << shape->getVolume() << "\n";

   transform tr;

   Shape* shapeTransform = tr.shift(*shape, 2, 2, 2);

   std::cout << "Shape shapeTransform square= " << shapeTransform->getSquare() 
      << " Shape shapeTransform volume= " << shapeTransform->getVolume() << "\n";

   delete shapeTransform;
   delete shape;

   return EXIT_SUCCESS;
}

