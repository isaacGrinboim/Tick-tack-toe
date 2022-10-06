#include "EasyComputerMove.h"
#include <chrono>
#include <thread>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;
void EasyComputerMove::makeMove() {
     //צריך לשמור זמנית את האברים הריקים בתור צמדים
     //צריך להגריל מי מהם יהיה זה שבוחרים
     //צריך לחכות שנייה ורק אז להדפיס
    /* int randomNumber = rand()%(BOARD_SIZE*BOARD_SIZE);
     for (int i = 0; i < BOARD_SIZE*BOARD_SIZE; i++)
     {
          if(i==randomNumber){
               if(board->isFree(i/BOARD_SIZE,i%BOARD_SIZE)){
                    board->putSymbol(i/BOARD_SIZE ,i%BOARD_SIZE, symbol);
               }
          }
          randomNumber=(randomNumber+1)%(BOARD_SIZE*BOARD_SIZE);
          i=0;
     }*/
     sleep_for(nanoseconds(10));
     sleep_until(system_clock::now() + seconds(1));
     board->putSymbol(2,2, symbol);
}
