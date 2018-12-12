#pragma once
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"
// used to calculate distance between any two points (x1,y1) and (x2,y2)
static double distance(double x1, double y1, double x2, double y2)
{
	return sqrt(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
}
// used to calculate if two given circles overlap - sum of their radius should be lesser than the distance between their centre points
static bool circleOverlap(Bishop& b, Queen& q)
{
	double d = distance(b.getX(), b.getY(), q.getX(), q.getY());
	return (b.getRadius() + q.getRadius()) <= d;
}
// used to calculate if two given circles overlap - sum of their radius should be lesser than the distance between their centre points
static bool circleOverlap(Bishop& b, Bishop& q)
{
	double d = distance(b.getX(), b.getY(), q.getX(), q.getY());
	return (b.getRadius() + q.getRadius()) <= d;
}
// used to calculate if two given circles overlap - sum of their radius should be lesser than the distance between their centre points
static bool circleOverlap(Queen& b, Queen& q)
{
	double d = distance(b.getX(), b.getY(), q.getX(), q.getY());
	return (b.getRadius() + q.getRadius()) <= d;
}
// used to calculate if two given squares overlap
// not possible if one rectangle is above top edge of other rectangle or if one rectangle is on the left of left edge of other rectangle
static bool squareOverlap(Rook& r1, Rook& r2)
{
	double r1BottomRightX = r1.bottomRightCornerX();
	double r1BottomRightY = r1.bottomRightCornerY();
	double r2BottomRightX = r2.bottomRightCornerX();
	double r2BottomRightY = r2.bottomRightCornerY();
	if (r1.getX() >= r2BottomRightX || r2.getX() >= r1BottomRightX)
		return false;
	if (r1.getY() <= r2BottomRightY || r2.getY() <= r1BottomRightY)
		return false;
	return true;
}
static bool circleSquareOverlap(Rook& r, Queen& q)
{
	
}

