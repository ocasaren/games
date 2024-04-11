#include <iostream>
#include <string>
using namespace std;

char square[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};


//beginfunction

int checkwin()
{
  if(square[1] == square[2] && square[2] == square[3])
  {
    return 1;
  }
      else if(square[4] == square[5] && square[5] == square[6] )
      {
        return 1;
      }
        else if(square[7] == square[8] && square[8] == square[9] )
      {
        return 1;
      }
      else if(square[1] == square[4] && square[4] == square[7] )
      {
        return 1;
      }
        else if(square[2] == square[5] && square[5] == square[8] )
      {
        return 1;
      }
    else if(square[3] == square[6] && square[6] == square[9] )
      {
        return 1;
      }
    else if(square[1] == square[5] && square[5] == square[9] )
      {
        return 1;
      }
    else if(square[3] == square[5] && square[5] == square[7] )
      {
        return 1;
      }
  else if(square [1] != '1' && square[2] != '2' && square [3] != '3'
            && square[4] != '4' && square[5] != '5' && square[6] != '6'
            && square[7] != '7' && square[8] != '8' && square[9] != '9')
  {
    return 0;
    }
            else
            {
              return -1;
            }
  
  }
//function to draw board
void board(){

  cout << "\n\n\tTIC TAC TOE GAME \n\n";

  cout << "Player 1(X) VS Player 2(O)" << endl << endl;
  cout << endl;

  //visual board
  cout << "   |   |   " << endl;
  cout << " " << square[1] << " | " << square[2] << " | " << square[3] <<         endl;

  cout << "___|___|___" << endl;
  cout << "   |   |   " << endl;

  cout << " " << square[4] << " | " << square[5] << " | " << square[6] <<       endl;
  
  cout << "___|___|___" << endl;
  cout << "   |   |   " << endl;

  cout << " " << square[7] << " | " << square[8] << " | " << square[9] <<     endl;

  cout << "   |   |   " << endl << endl;
}

//start of main function

int main() {
  int choice;

  label:
  //do while loop
  do 
  { cout << "1. Play guess the number" << endl <<
    "2. Play tic tac toe\n";
    
    cin >> choice;

         switch(choice)
     {
                 case 1:
                 cout << "GUESS THE NUMBER\n";
                {
              {
                int guess, fav_num;
                  fav_num = 7;
                char again = 'Y';
                while (again =='y' || again == 'Y')
                {
                  
                  cout << "Guess a number between 1 and 10" << endl;
                  cin >> guess;
                
                  if (guess == 7)
                  cout << "You win!" << endl;
                     else if (guess < 7)
                  cout << "You guessed too low" << endl;
                   else if (guess > 7)
                  cout << "You guessed too high" << endl;
                    
                cout << "Play again? (y/n)\n";
                  cin >> again;
                
                  if (again != 'y' || 'Y')
                    cout << "Main menu\n";
                  goto label;
            
                 
  }//end while loop
  return 0;
  }
                  }
                    //end case 1
           
            case 2:
                cout << "TIC TAC TOE\n";
                {

int player = 1, i, choice;
  char mark;
//

                  
  do
  {
      board();
    player=(player%2)?1:2;

    cout << "Player " << player << ", enter a number: ";
    cin >> choice;

    mark=(player == 1) ? 'X' : 'O';

    if(choice == 1 && square[1] == '1')
    {
          square[1] = mark;
      }
    else if(choice == 2 && square[2] == '2')
    {
          square[2] = mark;
    }
    else if(choice == 3 && square[3] == '3')
    {
          square[3] = mark;
    }
    else if(choice == 4 && square[4] == '4')
    {
          square[4] = mark;
    }
    else if(choice == 5 && square[5] == '5')
    {
          square[5] = mark;
    }
    else if(choice == 6 && square[6] == '6')
    {
          square[6] = mark;
    }
    else if(choice == 7 && square[7] == '7')
    {
          square[7] = mark;
    }
    else if(choice == 8 && square[8] == '8')
    {
          square[8] = mark;
    }
    else if(choice == 9 && square[9] == '9')
    {
          square[9] = mark;
    }
    else
    {
      cout << "Invalid move";

      player--;
      cin.ignore();
      cin.get();
    }

      i = checkwin();
      player++;
  }
  while(i == -1);
  board();
  if(i == 1)
  {
    cout << "\aPLAYER " << --player << " WINS!";
  }
  else{
    cout << "\aTry again?";
   //
  }
  cin.ignore();
  cin.get();
  return 0;
    
  }
                break;
       //end case 2
          }
  }
while(choice != 0);
  if (choice == 0){return 0;}
  

}