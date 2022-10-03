#include "Move.h"

class PlayerMove:public Move
{
public:
     PlayerMove(Board* board):Move(board){}
     ~PlayerMove();
     void makeMove() override;
};


