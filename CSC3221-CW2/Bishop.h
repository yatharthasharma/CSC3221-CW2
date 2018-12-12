#pragma once
#include "Piece.h"
class Bishop : public Piece
{
public:
	Bishop(double x, double y);
	~Bishop();
	double getRadius();

private:
	double radius = 1.0;
};