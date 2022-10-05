

#ifndef MOVE_H
#define MOVE_H

#include "Board.h"
class Move
{
protected:
     Board* board;
     Symbol symbol;

public:
     Move(Board* board, Symbol symbol):board(board),symbol(symbol){}
     virtual ~Move() = default;
     virtual void makeMove() = 0;

};

#endif