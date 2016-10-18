//Scott Seagraves
//9/19/2016
// 

#include <iostream>
#include <string>
using namespace std;


void happybirthday()
{
    cout<< "Happy Birthday to you. Happy Birthday to you. Happy Birthday dear ";
}

void name(string username)
{
 cout<< username<< "." <<endl;   
    
}

void happybirthday2()
{
    cout<< "Happy Birthday to you! " <<endl;
}

void age(int userage)
{
    cout<< "You are " << userage << " years old."<< endl;
    
}

int main()
{
    
    string username="";
    cout<< "Please enter your name"<<endl;
    cin>>username;
    happybirthday();
    name(username);
    happybirthday2();
    int x = 0;
    cout<< "Enter Age"<<endl;
    cin>>x;
    age(x);

    
}
