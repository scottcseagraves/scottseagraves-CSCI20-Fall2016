//Scott Seagraves
//10/12/2016
//program 3 rock paper scissors

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int userscore = 0;
    int computerscore = 0;
    int computer = 0;
    int user = 0;
    int rounds = 0;
    int playagain = 0;
    srand (time(0));
    
    while (playagain==0) {
    cout<<"How many rounds would you like to play?"<< endl;
    cin>>rounds;
    
    while (rounds>0)
    {
        cout<<"Please choose rock (1), paper (2), scissors (3)"<<endl;
        cin>>user;
       computer = rand() % 3 + 1;  
         
         if (user==1 && computer==2)
         {cout<<"Your rock lost to the computers paper."<<endl;
         computerscore++;
         rounds--;
             
         }
         
         else if (user==1 && computer==1)
         {cout<<"You both chose rock!"<<endl;
         
         rounds--;
             
         }
         
         else if (user==1 && computer==3)
         {cout<<"Your rock beart the computers paper."<<endl;
         userscore++;
         rounds--;
             
         }
         
         
         else if (user==2 && computer==1)
         {cout<<"Your paper beat the computers rock."<<endl;
         userscore++;
         rounds--;
             
         }
         
         else if (user==2 && computer==2)
         {cout<<"You and the computer both choose paper!"<<endl;
         rounds--;
             
         }
         
         else if (user==2 && computer==3)
         {cout<<"Your paper lost to the computers scissors"<<endl;
         computerscore++;
         rounds--;
             
         }
         
         else if (user==3 && computer==1)
         {cout<<"Your scissors lost to the computers rock."<<endl;
         computerscore++;
         rounds--;
             
         }
         
         else if (user==3 && computer==2)
         {cout<<"Your scissors beat the computers paper."<<endl;
         userscore++;
         rounds--;
             
         }
         
         else if (user==3 && computer==3)
         {cout<<"You and the computer both chose scissors!"<<endl;
         rounds--;
             
         }
         
         
        
    }
         if (userscore>computerscore)
         {cout<<"Good job, you beat the computer!"<<endl;}
         
         else if (computerscore>userscore)
         {cout<<"The computer beat you. Better luck next time."<<endl;}
         
         
         cout<< "Do you want to play again? yes = 0, no = 1"<<endl;
         cin>>playagain;
    }
    
   
    
    
    
    
    
    
    
}