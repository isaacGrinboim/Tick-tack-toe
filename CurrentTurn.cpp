#include "CurrentTurn.h"

void flipTurn(CurrentTurn& turn)
{
     switch (turn)
     {
     case CurrentTurn::Computer:
          turn = CurrentTurn::Player;
          break;
     
     case CurrentTurn::Player:
          turn = CurrentTurn::Computer;
          break;
     }
}