
#include "Game.h"

Game::Game(CurrentTurn firstTurn, Symbol symbol, Level level):
     turn(firstTurn), level(level){
     symbols[0] = symbol;
     if(symbol==Symbol::O) symbols[1] = Symbol::X;
     else symbols[1] = Symbol::O;
     /*
     board.putSymbol(1,1,symbol);
     cout<<endl<<"constructor:"<<endl<<"symbols[0]: "<<symbols[0]<<" symbols[1]: "<<
     symbols[1]<<endl<<endl<<"Board:"<<endl<<board<<endl;
     */
}
void Game::makeMove(){
     if  (turn == CurrentTurn::Player){
          Move* newMove = new PlayerMove(&board, symbols[0]);
          
          newMove->makeMove();
          moves.push_back(newMove);
          
     }
     else{
          Move* newMove = new ComputerMove(&board, symbols[1]);
          newMove->makeMove();
          moves.push_back(newMove);
     }

     //checkWin();
     cout<<board<<endl;

     changeTurn();


}
void Game::changeTurn(){
     if(turn == CurrentTurn::Computer)turn = CurrentTurn::Player;
     else turn = CurrentTurn::Computer;
}