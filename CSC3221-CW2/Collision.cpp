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
	if ((r1.getX() >= r2BottomRightX || r2.getX() >= r1BottomRightX) || (r1.getY() <= r2BottomRightY || r2.getY() <= r1BottomRightY))
		return false;
	return true;
}
// used both the below functions to calculate if circle/square overlap
// used this as a reference - https://stackoverflow.com/questions/401847/circle-rectangle-collision-detection-intersection
// limits value to minimum or maximum val from the given two coordinates if out of bound
static double restrictVal(double value, double c1IsMin, double c2IsMax)
{
	if (value < c1IsMin)
		value = c1IsMin;
	if (value > c2IsMax)
		value = c2IsMax;
	return value;
}
static bool circleSquareOverlap(Rook& r, Queen& q)
{
	// Calculate square's extreme coordinates (x,y)
	double rRightX = r.bottomRightCornerX();
	double rBottomY = r.bottomRightCornerY();
	// find square's closest point to the circle by using its extreme coordinate values to compare with circle's centre's coordinates
	double closestX = restrictVal(q.getX(), r.getX(), rRightX);
	double closestY = restrictVal(q.getY(), r.getY(), rBottomY);
	// find distance from this closest point to circle's centre
	double distanceOfXs = q.getX() - closestX;
	double distanceOfYs = q.getY() - closestY;
	// return if this point is closer from the circle centre than radius centre - cancelling out calculating sqrt part of distance
	// calculation since its at both sides
	return (distanceOfXs*distanceOfXs + distanceOfYs * distanceOfYs) < q.getRadius()*q.getRadius();
}