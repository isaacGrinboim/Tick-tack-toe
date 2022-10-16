#include "ComputerMove.h"

class HardComputerMove: public ComputerMove
{
public:
     HardComputerMove(Board* board, Symbol symbol):ComputerMove(board,symbol){}
     ~HardComputerMove() = default;
     void makeMove(int* row, int* col) override;
};
