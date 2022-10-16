#ifndef BOARD_H
#define BOARD_H

using namespace std;
#include "Symbol.h"
#include <iostream>
#include <exception>

#define BOARD_SIZE 3

class Board
{
private:
     Symbol board[BOARD_SIZE][BOARD_SIZE];
     void print(ostream& os);
public:
     Board();
     ~Board() = default;
     bool playerPutSymbol(int i, int j, Symbol symbol);
     bool computerPutSymbol(int i, int j, Symbol symbol);

     friend ostream& operator<<(ostream& os, Board& board);
     bool isFree(int i, int j);
     bool inBounds(int i, int j);
     bool horizontalCheck();
     bool verticalCheck();
     bool diagonalCheck();
     bool isThereAWin();
     bool boardFull() const;
     int toBlock(Symbol symbol);
     int toWin(Symbol symbol);
};




#endif