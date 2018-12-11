#pragma once
#include <iostream>

class Piece
{
public:
	Piece();
	Piece(double xcoordinate, double ycoordinate);
	Piece(const Piece& piece);
	virtual ~Piece() = 0;
	void move(double x, double y);
	const double getX();
	const double getY();
	void setX(double xcoordinate);
	void setY(double ycoordinate);
private:
	double x, y;
};