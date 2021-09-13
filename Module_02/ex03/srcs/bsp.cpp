#include "Point.hpp"

bool is_positive(Point const vertex1, Point const vertex2, Point const point) {
	return (point.getX().toFloat() - vertex1.getX().toFloat())
		* (vertex2.getY().toFloat() - vertex1.getY().toFloat())
			- (vertex2.getX().toFloat() - vertex1.getX().toFloat())
		* (point.getY().toFloat()- vertex1.getY().toFloat()) > 0;	
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	return (is_positive(point, a, b) && is_positive(point, b, c)
		&& is_positive (point, c, a));
}