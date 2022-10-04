#include "PlayerMove.h"

void PlayerMove::makeMove() {
     int i=0, j=0;
     cout<< "Please enter row number and column number"<<endl;
     cin>> i >> j;
     board->putSymbol(i,j,symbol);
     cout<< board<<endl;//אחר כך משתנה התור בגיים


}