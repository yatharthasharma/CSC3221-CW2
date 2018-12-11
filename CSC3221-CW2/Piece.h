#pragma once
#include <iostream>

class Piece
{
public:
	Piece(double x, double y);
	virtual ~Piece() = 0;
	void move(double x, double y);
	double getX();
	double getY();
private:
	double xcoordinate, ycoordinate;
};