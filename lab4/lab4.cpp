//Scott Seagraves
//9/2/2016
//coin star


#include <iostream>
#include <string>
using namespace std;

int main()
{
std::
    
    cout<<"Welcome to coin star, we're here to steal your money."<<endl;

 int c = 0;
    
    int x = 25;
    int y = 10;
    int z = 5;
    int p = 1;

    
cout<<"Please insert the amount of change you have in cents"<<endl;
cin>> c;



    cout<< "You have " << c / x << " quarters" <<endl;
    cout<< "and " << (c % x) / y << " dimes" <<endl;
    cout<< "and " << ((c % x) % y) / z << " nickles" <<endl;
    cout<< "and " << (((c % x) % y) % z) / p << " pennies" <<endl;
    
    double a = (c / 100);  //amount total in dollars
    
    cout<< "Your total was $" << a  <<endl;
    
    double b =(a-(a * .109));  //amount after charged fee
    
    cout<< "After our fee of 10.9% you have $" << b <<endl;
    
    return 0;
    
}