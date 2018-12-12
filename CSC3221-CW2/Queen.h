#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	Queen(double x, double y);
	~Queen();
	double getRadius();

private:
	double radius = 1.0;
};

