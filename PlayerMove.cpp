#include "PlayerMove.h"

void PlayerMove::makeMove(int* row, int* col) {
     int i=0, j=0;
     cout<< "Please enter row number and column number"<<endl;
     cin>> i >> j;

     while(!board->putSymbol(i,j,symbol)){
          cin>> i >> j;
     }
     *row = i;
     *col = j;
    
     //אחר כך משתנה התור בגיים
     //ומודפס הלוח

}