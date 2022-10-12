#include "ComputerMove.h"

class ModerateComputerMove: public ComputerMove
{
public:
     ModerateComputerMove(Board* board, Symbol symbol):ComputerMove(board,symbol){}
     ~ModerateComputerMove() = default;
     void makeMove(int* row, int* col) override;
     bool canWin(int* row, int* col);//   will check if theres a place to win, if so, update i,j
};
