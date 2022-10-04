#include "Move.h"
class ComputerMove: public Move
{
public:
ComputerMove(Board* board):Move(board){}
     ~ComputerMove();
     void makeMove() override;
};
