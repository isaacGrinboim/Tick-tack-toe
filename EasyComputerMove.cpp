#include "EasyComputerMove.h"
#include <chrono>
#include <thread>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;
void EasyComputerMove::makeMove(int* row, int* col) {
     //צריך לשמור זמנית את האברים הריקים בתור צמדים
     //צריך להגריל מי מהם יהיה זה שבוחרים
     //צריך לחכות שנייה ורק אז להדפיס
     int randomNumber = rand()%(BOARD_SIZE*BOARD_SIZE);

     for(int i = 0; i<BOARD_SIZE*BOARD_SIZE; ++i){
          if(board->isFree(randomNumber/BOARD_SIZE,randomNumber%BOARD_SIZE)){
               sleep_for(nanoseconds(10));
               sleep_until(system_clock::now() + seconds(1));
               *row = randomNumber/BOARD_SIZE+1;
               *col = randomNumber%BOARD_SIZE+1;
               cout<<"Row is: "<<*row<<" and col is: "<<*col<<endl;
               board->putSymbol(*row,*col, symbol);
               return;
          }
          else{
               randomNumber = (randomNumber+1)%(BOARD_SIZE*BOARD_SIZE);
          }
     }
}
