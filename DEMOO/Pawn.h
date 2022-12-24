#pragma once
#include "Piece.h"
#include "Square.h"
#include <vector>


class Pawn : public Piece
{
public:
	char getName();
	Pawn(bool white, bool motion, bool attack);
	bool move(int orow, int ocol, int nrow, int ncol);
	void getAllMoves(int row, int col);
	vector<Square*> getVec();
	void setVec(Board& bTest, vector<Square*>& moves);
	vector<Square*> avMoves;
	bool rl = false;

private:


};