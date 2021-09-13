#include "Point.hpp"

int main(void)
{
	Point a(Fixed(0), Fixed(0));
	Point b(5, 10);
	Point c(Fixed(10), Fixed(0));


	std::cout << "The vertices of the triangle: (" <<
		a.getX() << "," << a.getY() << "; " << b.getX() << "," << b.getY() <<
		"; " << c.getX() << "," << c.getY() << ")\n" << std::endl;


	Point point(Fixed(5), Fixed(9));
	if (bsp(a, b, c, point))
		std::cout << "Point (" << point.getX() << ", " << point.getY() <<
		") is inside triangle" << std::endl;
	else
		std::cout << "Point (" << point.getX() << ", " << point.getY() <<
		") is not inside triangle" << std::endl;

	Point point1(Fixed(5), Fixed(10.5f));
	if (bsp(a, b, c, point1))
		std::cout << "Point (" << point1.getX() << ", " << point1.getY() <<
		") is inside triangle" << std::endl;
	else
		std::cout << "Point (" << point1.getX() << ", " << point1.getY() <<
		") is not inside triangle" << std::endl;
	
	Point point2(Fixed(6), Fixed(3));
	if (bsp(a, b, c, point2))
		std::cout << "Point (" << point2.getX() << ", " << point2.getY() <<
		") is inside triangle" << std::endl;
	else
		std::cout << "Point (" << point2.getX() << ", " << point2.getY() <<
		") is not inside triangle" << std::endl;

	return 0;
}