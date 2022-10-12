#include "ModerateComputerMove.h"

void ModerateComputerMove::makeMove(int* row, int* col){
     cout<<endl<<"ModerateMove"<<endl;
     if(ComputerMove::canWin(row,col)){
               board->computerPutSymbol(*row,*col,symbol);
               cout<<endl<<"RealModerateMove"<<endl;
          sleep_for(nanoseconds(10));
          sleep_until(system_clock::now() + seconds(1));     
     }
     else{
          ComputerMove::makeMove(row,col);
          cout<<endl<<"NotRealModerateMove"<<endl;

     }
}