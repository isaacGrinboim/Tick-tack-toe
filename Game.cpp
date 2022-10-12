
#include "Game.h"

Game::Game(CurrentTurn firstTurn, Symbol symbol, Level level):
     turn(firstTurn), level(level),isGameOver(false){
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
     //     if(level == Level::Easy){
               //Abstract Factory:
               Move* newMove = makeComputerMove(level, &board, symbols[1]);
               //Move* newMove = new EasyComputerMove(&board, symbols[1]);
               newMove->makeMove(&i,&j);
               moves.push_back(newMove);
     //     }

     }

     cout<<board<<endl;
     
    // checkWin(i,j,turn);//להפוך את זה לבוליאני כדי שיהיה אפשר לפי זה להגיד אם נגמר לעדכן משתנה
     
     if(checkWin(i,j,turn) || gameBoardFull() ){
          isGameOver = true;
     }
     else{
          changeTurn();//ככה רק אם לא נגמר המשחק נשנה את התור.
     }
     

   //  changeTurn();


}
void Game::changeTurn(){
     if(turn == CurrentTurn::Computer)turn = CurrentTurn::Player;
     else turn = CurrentTurn::Computer;
}
bool Game::checkWin(int i, int j, CurrentTurn turn){
     if(board.diagonalCheck(i,j)||board.horizontalCheck(i)||board.verticalCheck(j)){
          cout<<turn<<endl;
          isGameOver = true; 
          declareWinner();   
          return true;
     }
     return false;
}

ostream& operator<<(ostream& os, CurrentTurn& turn){
     sleep_for(nanoseconds(10));
     sleep_until(system_clock::now() + seconds(1));
     switch(turn)
    {
        case CurrentTurn::Computer:    os<<"You have lost to the computer";      break;
        case CurrentTurn::Player:      os<<"Congratulations! You have won!";     break;
    }
    return os;
}


// #  #  #
// #  #  #
// #  #  #

//Factory:

Move* Game::makeComputerMove(Level level, Board* board, Symbol symbol){
     switch(level)
     {
     case Level::Easy:       return new EasyComputerMove(board, symbol);      break;
     case Level::Moderate:   return new ModerateComputerMove(board, symbol);  break;
     //case Level::Hard:     return new HardComputerMove(board, symbol);      break;
     default: return new EasyComputerMove(board, symbol);
     break;
     }
}
bool Game::gameBoardFull(){
    if(board.boardFull()){
         if(!(checkWin(0,0,turn)||checkWin(1,1,turn)||checkWin(2,2,turn)))     
              state = GameState::Tie;
         return true; 
    }
    return false;
}
bool Game::gameOver(GameState* state){
*state = this->state;     
return isGameOver;
}


void Game::declareWinner(){
     switch (turn)
     {
     case CurrentTurn::Player:
          state = GameState::Win;
          break;
     case CurrentTurn::Computer:
          state = GameState::Loss;
     default:
          break;
     }
}
