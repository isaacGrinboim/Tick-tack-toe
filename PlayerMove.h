#include "Move.h"

class PlayerMove:public Move
{
public:
     PlayerMove(Board* board,Symbol symbol):Move(board,symbol){}
     ~PlayerMove() = default;
     void makeMove(int* row, int* col) override;
};


