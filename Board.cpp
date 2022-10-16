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

bool Board::playerPutSymbol(int i, int j, Symbol symbol){
     if(!inBounds(i,j)){
          cout<<"This is not a game! Choose a valid place!"<<endl;
          cout<<"Please enter valid row and column numbers"<<endl;
          return false;
          }
     else if(!isFree(i,j)){
          cout<<"This place is already taken!"<<endl;
          cout<<"Please enter valid row and column numbers"<<endl;
          return false;
          }
     else{
          board[i-1][j-1] = symbol;
          return true;          
     }     
}


bool Board::computerPutSymbol(int i, int j, Symbol symbol){
     if(!inBounds(i,j) || ! isFree(i,j)){
          return false;
     }
     else{
          board[i-1][j-1] = symbol;
          return true;          
     }     
}



bool Board::isFree(int i, int j){
     return board[i-1][j-1]==Symbol::Empty;
}
bool Board::inBounds(int i, int j){
     return (0<=(i-1)&&(i-1)<=2 && 0<=(j-1)&&(j-1)<=2);
}
bool Board::horizontalCheck(){
     for(int i =0; i<BOARD_SIZE; ++i){
         if(board[i][0]==board[i][1] && board[i][0]==board[i][2]){
               if(board[i][0]!=Symbol::Empty){
                    return true;
               }
         }
     }
     return false;
}

bool Board::verticalCheck(){
     for(int j =0; j<BOARD_SIZE; ++j){
         if(board[0][j]==board[1][j] && board[0][j]==board[2][j]){
               if(board[0][j]!=Symbol::Empty){
                    return true;
               }
         }
     }
     return false;
}


bool Board::diagonalCheck(){
     if(board[1][1]==Symbol::Empty){
          return false;
     }
     if(board[2][0]==board[1][1] && board[2][0]==board[0][2]){
                    return true;
               }
     if(board[0][0]==board[1][1] && board[2][2]==board[1][1]){
                    return true;
               }     
     return false;
}

     



bool Board::boardFull()const{
     for (int i=0; i<BOARD_SIZE; ++i){
          for(int j=0; j<BOARD_SIZE; ++j){
               if(board[i][j]==Symbol::Empty){
                    return false;
               }
          }
     }
     return true;
}

int Board::toBlock(Symbol symbol){

     for(int h=2; h>=0; h--){
          if(board[(h+1)%3][2-(h+1)%3]==board[(2-2*h)%3][2-(2-2*h)%3] && board[(2-2*h)%3][2-(2-2*h)%3]!=symbol && board[(2-2*h)%3][2-(2-2*h)%3]!=Symbol::Empty && board[h][2-h]==Symbol::Empty){
               return 2*h+2;}
     }
    for(int i=0; i<BOARD_SIZE; ++i){
          if(board[i][0]==board[i][1] && (board[i][0]!=symbol&&board[i][0]!=Symbol::Empty) && board[i][2]==Symbol::Empty){return BOARD_SIZE*i+2;}
          if(board[i][0]==board[i][2] && (board[i][0]!=symbol&&board[i][0]!=Symbol::Empty) && board[i][1]==Symbol::Empty){return BOARD_SIZE*i+1;}
          if(board[i][1]==board[i][2] && (board[i][1]!=symbol&&board[i][1]!=Symbol::Empty) && board[i][0]==Symbol::Empty){return BOARD_SIZE*i;}
    }
    for(int j=0; j<BOARD_SIZE; ++j){
          if(board[0][j]==board[1][j] && (board[0][j]!=symbol&&board[0][j]!=Symbol::Empty) && board[2][j]==Symbol::Empty){return BOARD_SIZE*2+j;}
          if(board[0][j]==board[2][j] && (board[0][j]!=symbol&&board[0][j]!=Symbol::Empty) && board[1][j]==Symbol::Empty){return BOARD_SIZE+j;}
          if(board[1][j]==board[2][j] && (board[1][j]!=symbol&&board[1][j]!=Symbol::Empty) && board[0][j]==Symbol::Empty){return j;}
    }
     for(int k = 0; k<BOARD_SIZE; ++k){
          if(board[(k+1)%3][(k+1)%3]==board[(2-2*k)%3][(2-2*k)%3] && (board[(k+1)%3][(k+1)%3]!=symbol && board[(k+1)%3][(k+1)%3]!=Symbol::Empty) && board[k][k]==Symbol::Empty){return BOARD_SIZE*k+k;}
     }

     return -1;
}
int Board::toWin(Symbol symbol){


         for(int i=0; i<BOARD_SIZE; ++i){
          if(board[i][0]==board[i][1] && (board[i][0]==symbol&&board[i][0]!=Symbol::Empty) && board[i][2]==Symbol::Empty){cout<<"HERE1"<<endl;     return BOARD_SIZE*i+2;}
          if(board[i][0]==board[i][2] && (board[i][0]==symbol&&board[i][0]!=Symbol::Empty) && board[i][1]==Symbol::Empty){cout<<"HERE2"<<endl;      return BOARD_SIZE*i+1;}
          if(board[i][1]==board[i][2] && (board[i][1]==symbol&&board[i][1]!=Symbol::Empty) && board[i][0]==Symbol::Empty){cout<<"HERE3"<<endl; return BOARD_SIZE*i;}
    }
    for(int j=0; j<BOARD_SIZE; ++j){
          if(board[0][j]==board[1][j] && (board[0][j]==symbol&&board[0][j]!=Symbol::Empty) && board[2][j]==Symbol::Empty){cout<<"HERE4"<<endl; return BOARD_SIZE*2+j;}
          if(board[0][j]==board[2][j] && (board[0][j]==symbol&&board[0][j]!=Symbol::Empty) && board[1][j]==Symbol::Empty){cout<<"HERE5"<<endl; return BOARD_SIZE+j;}
          if(board[1][j]==board[2][j] && (board[1][j]==symbol&&board[1][j]!=Symbol::Empty) && board[0][j]==Symbol::Empty){cout<<"HERE6"<<endl; return j;}
    }
     for(int k = 0; k<BOARD_SIZE; ++k){
          if(board[(k+1)%3][(k+1)%3]==board[(2-2*k)%3][(2-2*k)%3] && (board[(k+1)%3][(k+1)%3]==symbol && board[(k+1)%3][(k+1)%3]!=Symbol::Empty) && board[k][k]==Symbol::Empty){cout<<"HERE7"<<endl; return BOARD_SIZE*k+k;}
     }
     for(int h=0; h<BOARD_SIZE; ++h){
          if(board[(h+1)%3][2-(h+1)%3]==board[(2-2*h)%3][2-(2-2*h)%3] && (board[(h+1)%3][2-(h+1)%3]==symbol && board[(h+1)%3][2-(h+1)%3]!=Symbol::Empty) && board[h][2-h]==Symbol::Empty){cout<<"HERE8"<<endl; return 2*h+2;}
     }
     return -1;

}

bool Board::isThereAWin(){
     return horizontalCheck()||verticalCheck()||diagonalCheck();
}