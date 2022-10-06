
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
     int i=0, j=0;
     if  (turn == CurrentTurn::Player){
          Move* newMove = new PlayerMove(&board, symbols[0]);
          
          newMove->makeMove(&i,&j);
          moves.push_back(newMove);
          
     }
     else{
          if(level == Level::Easy){
               Move* newMove = new EasyComputerMove(&board, symbols[1]);
               newMove->makeMove(&i,&j);
               moves.push_back(newMove);
          }

     }

     cout<<board<<endl;
     
     checkWin(i,j,turn);


     changeTurn();


}
void Game::changeTurn(){
     if(turn == CurrentTurn::Computer)turn = CurrentTurn::Player;
     else turn = CurrentTurn::Computer;
}
void Game::checkWin(int i, int j, CurrentTurn turn){
     if(board.diagonalCheck(i,j)||board.horizontalCheck(i)||board.verticalCheck(j)){
          cout<<turn<<endl;
     }

}

ostream& operator<<(ostream& os, CurrentTurn& turn){
     switch(turn)
    {
        case CurrentTurn::Computer:    os<<"You have lot to the computer";      break;
        case CurrentTurn::Player:      os<<"Congratulations! You have won!";    break;
    }
    return os;
}


// #  #  #
// #  #  #
// #  #  #
