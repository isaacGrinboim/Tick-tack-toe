#include "Move.h"
#include <chrono>
#include <thread>
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono;
class ComputerMove: public Move
{
public:
     ComputerMove(Board* board, Symbol symbol):Move(board,symbol){}
     ~ComputerMove() = default;
     void makeMove(int* row, int* col) override;
     bool canWin(int* row, int* col);
     bool canBlock(int* row, int* col);


};

