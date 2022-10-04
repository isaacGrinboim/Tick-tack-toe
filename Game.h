#include "Board.h"
#include <vector>
#include "PlayerMove.h"
#include "ComputerMove.h"

enum CurrentTurn{Player,Computer};
enum Level{Easy,Moderate,Hard};

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
     Game(CurrentTurn firstTurn, Symbol symbol = Symbol::X, Level level=Level::Easy):
     turn(firstTurn),level(level){}
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



};

