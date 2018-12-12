#include "Piece.h"


Piece::Piece()
{
}

Piece::Piece(double xcoordinate, double ycoordinate)
{
	x = xcoordinate;
	y = ycoordinate;
}

Piece::Piece(Piece &piece)
{
	setX(piece.x);
	setY(piece.y);
}

Piece::~Piece()
{
}

void Piece::move(double xcoordinate, double ycoordinate)
{
	x += xcoordinate;
	y += ycoordinate;

}

double Piece::getX()
{
	return x;
}

double Piece::getY()
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