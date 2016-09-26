//Scott Seagraves
//9/12/2016
//program 1 Wageslip



#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstname  = "";    //defineing varibles
    string secondname = "";
    string placeholder = "";
    float g = 0;
    float r = 0;
    float h = 0;
    float n = 0;

    
    
    
    cout<< "Who do you want to calculate pay for? (First Name)"<<endl;    //user input for wage calculations
    cin>>firstname;
    cout<< "What is their last name?"<<endl;
    cin>>secondname;
    cout<< "What is their hourly wage?"<<endl;
    cin>>r;
    cout<< "How many hours did they work?"<<endl;
    cin>>h;
    cout<< "View wage slip? (y/n)"<<endl;
    cin>>placeholder;
    
 g = r * h;                //wage calculations
 n = g * 0.83;
    
    cout<<"The wage slip for "<< firstname << " "<< secondname << " is as follows. Hours worked = "<< h << ". Rate of pay = $" <<r<< " an hour. Gross income is $"<<g<< ". And the net income is $"<<n<<endl;
    return 0;
}