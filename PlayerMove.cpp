#include "PlayerMove.h"

void PlayerMove::makeMove(int* row, int* col) {
     int i=0, j=0;
     cout<< "Please enter row number and column number"<<endl;
     cin>> i >> j;

     while(!board->playerPutSymbol(i,j,symbol)){
          cin.clear();
          cin.ignore(256,'\n');
          cin>> i >> j;
     }
     *row = i;
     *col = j;
    
     //אחר כך משתנה התור בגיים
     //ומודפס הלוח

}