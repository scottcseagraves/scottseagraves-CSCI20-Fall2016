//Scott Seagraves
//10/10/2016
//Gettting to know you


#include <iostream>
#include <string>
using namespace std;


int main ()

{
string color_ = "";
string color = "blue";
string color1 = "red";
string color2 = "pink";
string food_ = "";
string food = "1";
string food1 = "2";
string food2 = "3";
string animal_ = "";
string animal = "stag";
string animal1 = "otter";
string animal2 = "rabbit";
string full_ = "";
string full = "full";
string full1 = "half";
string drink_ = "";
string drink = "1";
string drink1 = "2";
string drink2 = "3";
int score = 0;


    cout<<"what is your favorite color? (blue, red, pink)"<<endl;
    cin>>color_;
    if (color_ == color) { 
    score ++; }
    else if (color_ == color1) {
        score ;
    }
    
    else (color_ == color2); {
        score --;
    }
    
    cout<<"what is your favorite food? (chocolate frog = 1, every flavored jelly beans= 2, fizzing whizbees = 3)"<<endl;
    cin>>food_;
    if (food_ == food) { 
    score ++; }
    else if (food_ == food1) {
        score ++;
    }
    
    else if (food_ == food2); {
        score --;
    }
    
    cout<<"what would be your patronus? (stag, otter, rabbit)"<<endl;
    cin>>animal_;
    if (animal_ == animal) { 
    score ++;
    cout<< "Is it a full or half patronus?"<<endl;                        //nested if statement
        cin>> full_;
        if (full_ == full) {
            score ++;
        
    }
    else if (animal_ == animal1) {
        score ++;
        cout<< "Is it a full or half patronus?"<<endl;                        //nested if statement
        cin>> full_;
        if (full_ == full) {
            score ++;
        }
        
        else (full_ == full1) ; {
            score --;
        }
    }
    
    else if (animal_ == animal2)  {
        score --;
        cout<< "Is it a full or half patronus?"<<endl;                        //nested if statement
        cin>> full_;
        if (full_ == full) {
            score ++;}
    }}
    
    cout<<"what is your favorite drink? (butterbeer = 1, pumpkin juice = 2, unicorn blood = 3)"<<endl;
    getline(cin, drink_);
    cin>>drink_;
    if (drink_ == drink) { 
    score ++; }
    
    else if (drink_ == drink1) {
        score;
    }
    
    else if (drink_ == drink2) ; {
        score = 99;;
    }
    
    
    
    
    switch (score) {
    
    case 1:
    cout<< "you are Ron Weasly"<<endl;
    break;
    case 2:
    cout<< "you are Harry Potter"<<endl;
     break;
    case 3:
    cout<< "you are Hermione Granger"<<endl;
     break;
    case 4:
    cout<< "you are Ron Weasly"<<endl;
     break;
    case -1:
    cout<< "you are Gregory Goyle"<<endl;
     break;
    case -2:
    cout<< "you are Vincent Crabbe"<<endl;
     break;
    case -3:
    cout<< "you are Draco Malfoy"<<endl;
     break;
    case 0:
    cout<< "you are Rubeus Hagrid"<<endl;
     break;
    case 99:
    cout<< "you are Lord Voldemort"<<endl;
     break;
    case 1111111:
    cout<< "This program has died"<<endl;
     break;
    }
    
    
    }
    