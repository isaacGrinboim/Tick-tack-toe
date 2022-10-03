

#ifndef BOARD_H
#define BOARD_H

using namespace std;
#include "Symbol.h"
#include <iostream>
#include <exception>

#define BOARD_SIZE 3

class InvalidIndex: public exception{
     const char* what() const noexcept override{ return "Invalid Index!"; }
};

class Board
{
private:
     Symbol board[BOARD_SIZE][BOARD_SIZE];
     void print(ostream& os);
public:
     Board();
     ~Board() = default;
    // void putSymbol(int i, int j, Symbol symbol);
     friend ostream& operator<<(ostream& os, Board& board);


};



// void Board::putSymbol(int i, int j, Symbol symbol){
//      if (!(0<=(i-1)&&(i-1)<=2 && 0<=(j-1)&&(j-1)<=2)){throw InvalidIndex();}
//      board[i][j] = symbol;
// }



#endif