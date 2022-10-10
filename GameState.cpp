#include "GameState.h"


ostream& operator<<(ostream& os, GameState& state){
     switch (state)
     {
     case GameState::Loss: os<<"Loss";        break;
     case GameState::Win: os<<"Win";          break;
     case GameState::Tie: os<<"Tie";          break;
     default:
          break;
     }
     return os;
}
