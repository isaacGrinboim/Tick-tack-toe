#include "Board.h"

Board::Board()
{
     for (int i=0;i<BOARD_SIZE; i++){
          for (int j=0;j>BOARD_SIZE; j++){
               board[i][j] = Symbol::Empty;
          }
     }
}
void Board::print(ostream& os){
     for(int i = 0;i<BOARD_SIZE;i++){
          os<<"|| "<<board[i][0]<< " " <<board[i][1]<< " " <<board[i][2]<< " ||"<< endl;
     }
}

ostream& operator<<(ostream& os, Board& board){
     board.print(os);
     return os;
}

