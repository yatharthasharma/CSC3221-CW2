#include "Piece.h"


Piece::Piece(double x, double y)
{
	xcoordinate = x;
	ycoordinate = y;
}

Piece::~Piece()
{
}

void Piece::move(double x, double y)
{
	xcoordinate += x;
	ycoordinate += y;

}

double Piece::getX()
{
	return xcoordinate;
}

double Piece::getY()
{
	return ycoordinate;
}
