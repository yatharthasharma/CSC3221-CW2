#pragma once
#include <vector>
#include <iostream>
#include "Collision.cpp"
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"
using namespace std;

int main() 
{
	int numberOfTries = 50;
	const int numberOfPlayers = 10;
	int maxCoordinate = 1000;
	int moverooks;
	int movebishops;
	int movequeens;
	Rook rooks[numberOfPlayers];
	Queen queens[numberOfPlayers];
	Bishop bishops[numberOfPlayers];
	for (int i = 0; i <= numberOfPlayers; i++)
	{
		moverooks = rand() % 50 + (-25);		// random values used to change positions of pieces
		movequeens = rand() % 50 + (-25);
		movebishops = rand() % 50 + (-25);
		rooks[i].move(0, moverooks);
		queens[i].move(movequeens, movequeens);
		if (circleSquareOverlap(rooks[i], queens[i]))
		{
			cout << "figures overlapped - rook(" << rooks[i].getX() << "," << rooks[i].getX() << "), queen(" << queens[i].getX() << ","
				<< rooks[i].getX() << ")";
		}
		bishops[i].move(movebishops,movebishops);
	}
	for (int i = 0; i <= numberOfPlayers; i++)
	{
		//movequeens, movebishops, moverooks = rand() % 50 + (-50);
		//rooks[i].move(moverooks,0);
		//queens[i].move(movequeens,0);
		//bishops[i].move(movebishops, movebishops);
		cout << "rook " << i << " is: (" << rooks[i].getX() << "," << rooks[i].getY() << ")\n";
		cout << "queen " << i << " is: (" << queens[i].getX() << "," << queens[i].getY() << ")\n";
		cout << "bishop " << i << " is: (" << bishops[i].getX() << "," << bishops[i].getY() << ")\n";
	}
	
	system("PAUSE");
	return EXIT_SUCCESS;
}