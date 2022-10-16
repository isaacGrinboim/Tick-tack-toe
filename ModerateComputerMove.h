#include "ComputerMove.h"

class ModerateComputerMove: public ComputerMove
{
public:
     ModerateComputerMove(Board* board, Symbol symbol):ComputerMove(board,symbol){}
     ~ModerateComputerMove() = default;
     void makeMove(int* row, int* col) override;
};
