#include "Queen.h"

Queen::Queen()
{
	setX(14);
	setY(10);
}

Queen::Queen(double x, double y): Piece(x,y)
{
}


Queen::~Queen()
{
}

double Queen::getRadius()
{
	return radius;
}
