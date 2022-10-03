#include "Board.h"

int main(){
//     cout<<BOARD_LINE<<endl;


     Board a;
     cout<<a;
     for(int i=1; i<=BOARD_SIZE; ++i){
          for(int j=1; j<=BOARD_SIZE; ++j){
               a.putSymbol(i,j,Symbol::O);
               cout<<a;
          }
     }
     





     double x;
     cin>>x;


     return 0;
}
