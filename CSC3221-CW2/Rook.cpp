#include "Rook.h"

Rook::Rook()
{
	setX(13);
	setY(17);
}

Rook::Rook(double x, double y):Piece(x,y)
{
}

Rook::~Rook()
{
}

const double Rook::getSide()
{
	return side;
}

double Rook::bottomRightCornerX()
{
	return getX() + getSide();
}

double Rook::bottomRightCornerY()
{
	return getY() - getSide();
}

