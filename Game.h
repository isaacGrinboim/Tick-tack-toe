#include "Board.h"
#include <vector>
#include "PlayerMove.h"
#include "EasyComputerMove.h"

enum class CurrentTurn{Player,Computer};
enum class Level{Easy,Moderate,Hard};

class Game
{
private:
     Board board;
     CurrentTurn turn;
     void changeTurn();
     vector<Move*> moves;
     Symbol symbols[2];
     Level level;
//במשחק צריך להקליד אם אתה ראשון ואם אתה איקס או עיגול


public:
     Game(CurrentTurn firstTurn, Symbol symbol = Symbol::X, Level level=Level::Easy);
     void makeMove();//תהיה בדיקה איזה תור זה
     //לפי זה ניצור אינסטנס של command
     //נעשה את המתודה שלו ונשמור אותו בוקטור
     //יהיה לקבל מהמשתמש קלט בשביל אינדקסים
//יהיה לשנות את התור לשני
//זה אומר גם להחליף את הסטרטגי
//יהיה לבדוק ניצחון
//נעשה סטרטגי
//נקרא למתודה הוירטואלית המתאימה של מהלך
//אחר כך נעשה בכל מקרה בדיקת נצחון

     
     void checkWin(int i, int j, CurrentTurn turn);

     Move* makeComputerMove(Level level, Board* board, Symbol symbol);//Factory

};

ostream& operator<<(ostream& os, CurrentTurn& turn);
