#pragma once

#include "Piece.h"
#include "Square.h"

class Board
{
public:
	Board();
	Board(const Board& oBoard);
	Square* board[8][8];
	void display();
	vector<vector<Square*>> Blackvec;
	vector<vector<Square*>> Whitevec;
	vector<Square*>WhiteAttackerMoves;
	vector<Square*>BlackAttackerMoves;
	vector<Square*>WhiteKingMoves;
	vector<Square*>BlackKingMoves;
	vector<Square*>PossibleSolutions;
	vector<Square*>kingPossibleSolutions;
	Square* BlackAttackerLoc;
	Square* BlackKingLoc;
	Square* WhiteAttackerLoc;
	Square* WhiteKingLoc;
	int CountWhiteAttack;
	int CountBlackAttack;
private:


};



