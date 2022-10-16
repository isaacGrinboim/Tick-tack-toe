#include "Game.h"
#include "Score.h"
void playSingleGame(Score* score, CurrentTurn& gameTurn);
bool makeDesicion();
bool validChoise(const string& playing);

int main(){
      CurrentTurn gameStartingTurn = CurrentTurn::Player;
      Score score;
      bool keepPlay = true;
      // Symbol playerSymbol;

      cout<<"Welcome to Tic Tac Toe game!"<<endl;
      // <<"Please choose X or O"<<endl;

      /*
      cout<<"Do you wish to start?"<<endl;
      if(makeDesicion()){
       gameStartingTurn = CurrentTurn::Player;
      }
      else{
       gameStartingTurn = CurrentTurn::Computer;
      }*/
      while(keepPlay)
      {
        playSingleGame(&score ,gameStartingTurn);
        cout<<endl<<"Game score is: "<<score<<endl;
        cout<<"Do you wish to play another game?"<<endl;
        keepPlay = makeDesicion();
      }
      
      cout<<"You have decided to end the game."<<endl<<"Game score is: "<<score<<endl;

     int g;
     cin>>g;
     return 0;
}











void playSingleGame(Score* score, CurrentTurn& gameTurn){
  //CurrentTurn firstTurn, Symbol symbol, Level level
  Level level; int n=0;
  cout<<"Enter 1, 2 or 3 for Easy, Moderate or Hard"<<endl;
  cin>>n;
  switch (n)
  {
  case 1:
    level = Level::Easy;
    break;
  case 2:
    level = Level::Moderate;
    break;  
  case 3:
    level = Level::Hard;
    break;

  default:
    level = Level::Easy;
    break;
  }

  Game newGame(gameTurn, Symbol::X, level);
  GameState state;
  while(!newGame.gameOver(&state)){
    newGame.makeMove();            
  }
  cout<<"Game has ended"<<endl;
  *score+=state;
  flipTurn(gameTurn);//משנה את הראשון שיתחיל לסירוגין
}














bool makeDesicion(){
  cin.ignore();
  string choise;
  while(!validChoise(choise))
    {
    cout<<"Please enter Yes/No"<<endl;
    getline(cin, choise);
  }
  if(choise == "Yes"||choise == "yes"){
    cout<<endl<<"New game!"<<endl<<endl;
    return true;
  }
  else {return false;}
}

bool validChoise(const string& choise){
  return choise=="no" || choise=="yes" || choise == "Yes" || choise == "No";
}






     //CurrentTurn playerStarts = CurrentTurn::Player;
     //turn = Player wants to be first -> turn = 0;







  // Board a;
     // cout<<a;
     // for(int i=1; i<=BOARD_SIZE; ++i){
     //      for(int j=1; j<=BOARD_SIZE; ++j){
     //           a.putSymbol(i,j,Symbol::O);
     //           cout<<a;
     //      }
     // }


     
     // double x;
     // cin>>x;

//     cout<<BOARD_LINE<<endl;

      

   //   Game newGame(CurrentTurn::Player);
   //   GameState state;
   //   while(!newGame.gameOver(&state)){
   //      newGame.makeMove();
     //                        //יהיה אפשר לקבל את המידע על סוף המשחק
     // אולי סתם בשביל האתגר נעשה מחלקה של מידע על משחק, עם 3 משתנים ויהיה אופרטור פלוס שווה
     // שמקבל מימין גיים סטייט ולפי כל אחד נוסיף בהתאם
     //}//יהיו 3 משתנים שמחזיקים כמה נצחונות כמה הפסדים וכמה תיקו היו
     // for (int i = 0; i < 20; i++){
     //      newGame.makeMove();
   //   // }
   //   score+=state;

   //   cout<<"Game State is: "<<state<<endl;
   //   cout<<"Game score is: "<<score;