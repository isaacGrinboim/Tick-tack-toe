#include "Game.h"

int main(){
     //CurrentTurn playerStarts = CurrentTurn::Player;
     //turn = Player wants to be first -> turn = 0;

     
     Game newGame(CurrentTurn::Player);
     
     for (int i = 0; i < 20; i++){
          newGame.makeMove();
     }
     






     return 0;
}



  // Board a;
     // cout<<a;
     // for(int i=1; i<=BOARD_SIZE; ++i){
     //      for(int j=1; j<=BOARD_SIZE; ++j){
     //           a.putSymbol(i,j,Symbol::O);
     //           cout<<a;
     //      }
     // }


     
     // double x;
     // cin>>x;

//     cout<<BOARD_LINE<<endl;
