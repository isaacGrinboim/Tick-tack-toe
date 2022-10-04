
#include "Game.h"

Game::Game(CurrentTurn firstTurn, Symbol symbol, Level level){
     symbols[0] = symbol;
     if(symbol==Symbol::O) symbols[1] = Symbol::X;
     else symbols[1] = Symbol::O;
}
void Game::makeMove(){
     if  (turn == CurrentTurn::Player){
          Move* newMove = new PlayerMove(&board);
          newMove->makeMove();
          moves.push_back(newMove);
          
     }
     else{
          Move* newMove = new ComputerMove(&board);
          newMove->makeMove();
          moves.push_back(newMove);
     }

     //checkWin();
     changeTurn();


}
void Game::changeTurn(){
     if(turn == CurrentTurn::Computer)turn = CurrentTurn::Player;
     else turn = CurrentTurn::Computer;
}