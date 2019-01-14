#include <iostream>

#include "Circle.h"
#include "Ellipse.h"
#include "Figure.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
	Rectangle rec(3, 2, 5, 7);
	Rectangle* rec_ptr = &rec;

	Square sq(4, 5, 3);
	Square* sq_ptr = &sq;

	Ellipse el(5, 8, 3, 4);
	Ellipse* el_ptr = &el;

	Circle circ(3, 7, 3);
	Circle* circ_ptr = &circ;

	Figure* ar[4];

	ar[0] = rec_ptr;
	ar[1] = sq_ptr;
	ar[2] = el_ptr;
	ar[3] = circ_ptr;

	for (int i = 0; i < 4; ++i)
	{
		ar[i]->Save("E:\\Users\\boop.txt");
	}

	Rectangle rec2(1, 1, 1, 1);
	rec2.Load("E:\\Users\\boop.txt");
	Rectangle* rec2_ptr = &rec2;

	Square sq2(2, 2, 2);
	sq2.Load("E:\\Users\\boop.txt");
	Square* sq2_ptr = &sq2;

	Ellipse el2(3, 3, 3, 3);
	el2.Load("E:\\Users\\boop.txt");
	Ellipse* el2_ptr = &el2;

	Circle circ2(4, 4, 4);
	circ2.Load("E:\\Users\\boop.txt");
	Circle* circ2_ptr = &circ2;

	Figure* ar2[4];

	ar2[0] = rec2_ptr;
	ar2[1] = sq2_ptr;
	ar2[2] = el2_ptr;
	ar2[3] = circ2_ptr;

	for (int i = 0; i < 4; ++i)
	{
		ar2[i]->Print();
		cout << endl;
	}
}