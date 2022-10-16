#include "HardComputerMove.h"

void HardComputerMove::makeMove(int* row, int* col){
  //   cout<<endl<<"HardMove"<<endl;
     if(ComputerMove::canWin(row,col)){
          board->computerPutSymbol(*row,*col,symbol);
          sleep_for(nanoseconds(10));
          sleep_until(system_clock::now() + seconds(1));     
     }
     else if(ComputerMove::canBlock(row,col)){
          board->computerPutSymbol(*row,*col,symbol);
          sleep_for(nanoseconds(10));
          sleep_until(system_clock::now() + seconds(1));     
     }
     else{
          ComputerMove::makeMove(row,col);
     }
}