#include "Bishop.h"

Bishop::Bishop()
{
	setX(20);
	setY(9);
}
Bishop::Bishop(double x, double y):Piece(x,y)
{
}

Bishop::~Bishop()
{
}

double Bishop::getRadius()
{
	return radius;
}
