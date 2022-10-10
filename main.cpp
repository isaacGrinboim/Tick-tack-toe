#include "Game.h"
#include "Score.h"
int main(){
     //CurrentTurn playerStarts = CurrentTurn::Player;
     //turn = Player wants to be first -> turn = 0;

      Score score;
      bool keepPlay = true;
      //string playing;

      while (keepPlay)
      {
         Game newGame(CurrentTurn::Player);
         GameState state;


          while(!newGame.gameOver(&state)){
              newGame.makeMove();            
          }
          score+=state;
            cout<<"Game State is: "<<state<<endl;
            cout<<"Game score is: "<<score<<endl;
            cout<<"Do you wish to play another game?"<<endl;
      }
      

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
     int g;
     cin>>g;
     return 0;
}



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
