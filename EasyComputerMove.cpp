#include "EasyComputerMove.h"
#include <chrono>
#include <thread>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;
void EasyComputerMove::makeMove() {
     //צריך לשמור זמנית את האברים הריקים בתור צמדים
     //צריך להגריל מי מהם יהיה זה שבוחרים
     //צריך לחכות שנייה ורק אז להדפיס
     int randomNumber = rand()%(BOARD_SIZE*BOARD_SIZE);

     for(int i = 0; i<BOARD_SIZE*BOARD_SIZE; ++i){
          cout<<endl<<"random: "<<randomNumber<<endl;
          cout<<" i/3 = "<<randomNumber/3<<" and i%3 = "<<randomNumber%3<<endl;
          cout<<"isFree: "<<board->isFree(randomNumber/BOARD_SIZE,randomNumber%BOARD_SIZE)<<endl<<endl;

          if(board->isFree(randomNumber/BOARD_SIZE,randomNumber%BOARD_SIZE)){
               sleep_for(nanoseconds(10));
               sleep_until(system_clock::now() + seconds(1));
               board->putSymbol((randomNumber/BOARD_SIZE+1),(randomNumber%BOARD_SIZE+1), symbol);
               return;
          }
          else{
               randomNumber = (randomNumber+1)%(BOARD_SIZE*BOARD_SIZE);
          }
     }
}
