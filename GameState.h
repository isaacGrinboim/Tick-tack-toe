
#ifndef GAME_STATE_H
#define GAME_STATE_H

#include <iostream>
using namespace std;
enum class GameState{Win,Loss,Tie};
ostream& operator<<(ostream& os, GameState& symbol);

#endif