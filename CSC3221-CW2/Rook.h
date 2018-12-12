#pragma once
#include "Piece.h"
class Rook : public Piece
{
public:
	Rook(double x, double y);					// (x,y) are the coordinates for the top left corner of the square
	~Rook();
	const double getSide();
	double bottomRightCornerX();				// to find x coordinate for the bottom right corner of the square
	double bottomRightCornerY();				// to find y coordinate for the bottom right corner of the square
private: 
	double side = 2.0;
};