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

bool Board::putSymbol(int i, int j, Symbol symbol){

     bool notInBoard = !(0<=(i-1)&&(i-1)<=2 && 0<=(j-1)&&(j-1)<=2);// מחזיק האם זה מחוץ לטווח
     bool placeTaken = (board[i][j] != Symbol::Empty);// מחזיק האם זה לא ריק

     if(notInBoard){
          cout<<"This is not a game! Choose a valid place!"<<endl;
          cout<<"Please enter valid row and column numbers"<<endl;
          return false;
          }
     else if(placeTaken){
          cout<<"This place is already taken!"<<endl;
          cout<<"Please enter valid row and column numbers"<<endl;
          return false;
          }
     else{
          board[i-1][j-1] = symbol;
          return true;          
     }     
}

bool Board::isFree(int i, int j){
     return board[i][j]==Symbol::Empty;
}
bool Board::horizontalCheck(int i){
     bool win = true;
     for(int k = 0; k<BOARD_SIZE; ++k){//horizontal check
          if(board[i][k]!=board[i][0]){
               win = false;
          }
     }
     return win;
}
bool Board::verticalCheck(int j){
     bool win = true;
     for(int k = 0; k<BOARD_SIZE; ++k){//vertical check
          if(board[k][j]!=board[0][j]){
               win = false;
          }
     }
     return win;
}


     bool Board::diagonalCheck(int i, int j){
          if(i!=j){
               return false;
          }
          bool win = true;
          for(int k=0; k<BOARD_SIZE;++k){
               if(board[k][k]!=board[0][0]){
                    win = false;
               }
          }
          return win;
     }
