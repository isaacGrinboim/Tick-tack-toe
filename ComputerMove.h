#include "Move.h"
class ComputerMove: public Move
{
public:
ComputerMove(Board* board, Symbol symbol):Move(board,symbol){}
     ~ComputerMove() = default;
     void makeMove() override;
};
