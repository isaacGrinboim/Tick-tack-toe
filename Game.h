#include "Board.h"
//צריך לעשוות אינקלוד למובס

class Game
{
private:
     Board board;
     CurrentTurn turn;
     Move* moves;
     Symbol symbols[2];



public:
     Game(CurrentTurn firstTurn):turn(firstTurn){}
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

enum CurrentTurn{Player,Computer};