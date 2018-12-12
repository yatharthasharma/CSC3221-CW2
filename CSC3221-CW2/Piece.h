#pragma once
#include <iostream>

class Piece
{
public:
	Piece();
	Piece(double xcoordinate, double ycoordinate);
	Piece(Piece& piece);
	virtual ~Piece() = 0;
	void move(double x, double y);
	double getX();
	double getY();
	void setX(double xcoordinate);
	void setY(double ycoordinate);
private:
	double x, y;
};