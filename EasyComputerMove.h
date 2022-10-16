#include "ComputerMove.h"

class EasyComputerMove: public ComputerMove
{
public:
     EasyComputerMove(Board* board, Symbol symbol):ComputerMove(board,symbol){}
     ~EasyComputerMove() = default;
};
