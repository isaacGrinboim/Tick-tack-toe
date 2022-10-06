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

     bool notInBoard = !inBounds(i,j);// מחזיק האם זה מחוץ לטווח(צריך לקבל מספר גדול מאפס)
     bool placeTaken = !isFree(i,j);// מחזיק האם זה לא ריק(צריך לקבל מספר גדול מאפס)

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
     cout<<endl<<"isFree Check:"<<endl<<"i is: "<<i<<"  and j is: "<<j <<endl<<endl;
     return board[i-1][j-1]==Symbol::Empty;
}
bool Board::inBounds(int i, int j){
     return (0<=(i-1)&&(i-1)<=2 && 0<=(j-1)&&(j-1)<=2);
}
bool Board::horizontalCheck(int i){
     bool win = true;
     for(int k = 0; k<BOARD_SIZE; ++k){//horizontal check
          if(board[i-1][k]!=board[i-1][0]){
               win = false;
          }
     }
     return win;
}
bool Board::verticalCheck(int j){
     bool win = true;
     for(int k = 0; k<BOARD_SIZE; ++k){//vertical check
          if(board[k][j-1]!=board[0][j-1]){
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
