#include "Score.h"

Score::Score():win(0),loss(0),tie(0){}

Score& Score::operator+=(GameState& state){
     switch (state)
     {
     case GameState::Win:
          win+=1;
          break;
     case GameState::Loss:
          loss+=1;
          break;
     case GameState::Tie:
          tie+=1;
          break;
     default:
          break;
     }
     return *this;
}
ostream& operator<<(ostream& os, Score& score){
     os<<"Current wins:   " <<score.win<<endl
     <<"               Current losses: "<<score.loss<<endl
     <<"               current ties:   "<< score.tie<<endl;
     return os;
}
