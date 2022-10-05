#include "Board.h"

Board::Board():board()
{
     for (int i=0;i<BOARD_SIZE; i++){
          for (int j=0;j>BOARD_SIZE; j++){
               board[i][j] = Symbol::Empty;
               }
     }
}
void Board::print(ostream& os){
     os<<"---------------"<<endl;
     for(int i = 0;i<BOARD_SIZE;i++){
          os<<"||"<<board[i][0]<<"|" <<board[i][1]<< "|" <<board[i][2]<< "||"<< endl;
          os<<"---------------"<<endl;
     }
}

ostream& operator<<(ostream& os, Board& board){
     board.print(os);
     return os;
}

void Board::putSymbol(int i, int j, Symbol symbol){
    // if (!(0<=(i-1)&&(i-1)<=2 && 0<=(j-1)&&(j-1)<=2)){throw InvalidIndex();}
    // if (board[i][j] != Symbol::Empty){throw Invalid}
     board[i-1][j-1] = symbol;
}
