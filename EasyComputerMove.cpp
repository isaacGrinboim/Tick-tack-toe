#include "EasyComputerMove.h"
#include <chrono>
#include <thread>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;
void EasyComputerMove::makeMove(int* row, int* col) {
     //צריך לשמור זמנית את האברים הריקים בתור צמדים
     //צריך להגריל מי מהם יהיה זה שבוחרים
     //צריך לחכות שנייה ורק אז להדפיס    
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




