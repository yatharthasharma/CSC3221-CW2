#pragma once
#include "Piece.h"
class Rook : public Piece
{
public:
	Rook(double x, double y);
	~Rook();
private: 
	double side = 2;
};