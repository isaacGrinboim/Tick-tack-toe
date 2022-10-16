#include "ComputerMove.h"

void ComputerMove::makeMove(int* row, int* col) {
   
     int randomNumber = rand()%(BOARD_SIZE*BOARD_SIZE);// אולי למצוא דרך אחרת להגריל מספר
     do{
          *row = randomNumber/BOARD_SIZE+1;
          *col = randomNumber%BOARD_SIZE+1;
          randomNumber = (randomNumber+1)%(BOARD_SIZE*BOARD_SIZE);
          if(board->isFree(*row,*col))
          {
               sleep_for(nanoseconds(10));
               sleep_until(system_clock::now() + seconds(1));
          }
     }while(!board->computerPutSymbol(*row,*col,symbol));
}

bool ComputerMove::canWin(int* row, int* col){
     int place = board->toWin(symbol);
     if(place!=-1){
          *row = place/3+1; *col = place%3+1;
          return true;
     }
     else{
          return false;
     }
}

bool ComputerMove::canBlock(int* row, int* col){
     int place = board->toBlock(symbol);
     if(place!=-1){
          *row = place/3+1; *col = place%3+1;
          return true;
     }
     else{
          return false;
     }
}

