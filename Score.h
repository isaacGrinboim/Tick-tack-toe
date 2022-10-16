#include "GameState.h"
class Score
{
private:
     int win;
     int loss;
     int tie;
public:
     Score();
     ~Score() = default;
     Score& operator+=(GameState& state);
     friend ostream& operator<<(ostream& os, Score& scores);



};
