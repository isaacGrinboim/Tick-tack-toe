
#include <vector>
#include "Board.h"
#include "PlayerMove.h"
#include "EasyComputerMove.h"
#include "ModerateComputerMove.h"
#include "HardComputerMove.h"
#include "GameState.h"
#include "CurrentTurn.h"
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
     bool isGameOver;//להוסיף לרשימת אתחול
     GameState state;
//במשחק צריך להקליד אם אתה ראשון ואם אתה איקס או עיגול


public:
     Game(CurrentTurn firstTurn, Symbol symbol = Symbol::X, Level level=Level::Moderate);
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

     
     bool checkWin(int i, int j, CurrentTurn turn);
     bool gameBoardFull();
     bool gameOver(GameState& state);
     void declareWinner();
     Move* makeComputerMove(Level level, Board* board, Symbol symbol);//Factory
     
};

ostream& operator<<(ostream& os, CurrentTurn& turn);
