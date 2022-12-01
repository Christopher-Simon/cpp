#include <iostream>

#include "Point.hpp"

// Anazing stackoverflow page :
// https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle?answertab=scoredesc#tab-top

bool bsp( Point const a, Point const b, Point const c, Point const point);
Fixed	CalcTriArea(Point v, Point d, Point m);

void system (Point T1, Point T2, Point T3, Point P) {

	std::cout << "for point ";
	P.printPoint();
	std::cout << "And T1 ";
	T1.printPoint();
	std::cout << "And T2 ";
	T2.printPoint();
	std::cout << "And T3 ";
	T3.printPoint();
	std::cout << "is in ? : " << bsp(T1, T2, T3, P) << std::endl << std::endl;
}

int main( void ) {
	Point P(0,0);
	Point T1(0,0);
	Point T2(0,0);
	Point T3(0,0);

	system(Point(-1,-1), Point(0,1), Point(1,-1), Point(0,0));
	system(Point(-1,-1), Point(0,1), Point(1,-1), Point(-5,0));
	system(Point(0,0), Point(0,0), Point(0,0), Point(0,0));
	system(Point(0,0), Point(1,1), Point(2,0), Point(0,0));
	system(Point(0,0), Point(1,1), Point(2,0), Point(1,-0.1));
	system(Point(0,0), Point(1,1), Point(2,0), Point(1,0.1));
	system(Point(0,0), Point(1,1), Point(2,0), Point(1,0.01));
	system(Point(0,0), Point(1,1), Point(2,0), Point(1,0.001));
	return 0;
}