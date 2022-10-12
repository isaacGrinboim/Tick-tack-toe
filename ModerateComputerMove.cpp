#include "ModerateComputerMove.h"

void ModerateComputerMove::makeMove(int* row, int* col){
     if(ComputerMove::canWin(row,col)){
          board->computerPutSymbol(*row,*col,symbol);
     }
     else{
          ComputerMove::makeMove(row,col);
     }
}
