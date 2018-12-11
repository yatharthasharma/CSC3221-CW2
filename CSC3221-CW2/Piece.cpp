#include "Piece.h"


Piece::Piece()
{
}

Piece::Piece(double xcoordinate, double ycoordinate)
{
	x = xcoordinate;
	y = ycoordinate;
}

Piece::Piece(const Piece &piece)
{
	setX(piece.x);
	setY(piece.y);
}

Piece::~Piece()
{
	x = 1;
	y = 1;
}

void Piece::move(double xcoordinate, double ycoordinate)
{
	x += xcoordinate;
	y += ycoordinate;

}

const double Piece::getX()
{
	return x;
}

const double Piece::getY()
{
	return y;
}

void Piece::setX(double xcoordinate)
{
	x = xcoordinate;
}

void Piece::setY(double ycoordinate)
{
	y = ycoordinate;
}
