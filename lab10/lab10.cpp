//Scott Seagraves
//10/3/2016
//Boolean and Logical Operators



#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int suzyAge=25;
    int johnAge = 21;
    cout<<(suzyAge<johnAge)<< ". 25 is not <  21 so false, Function returns 0"<<endl;
    
    int x=7;
    int y=7;
    cout<<(x>=y)<<". This is true because 7 is equal to 7. Function returns 1."<<endl;
    
    int a= 1;
    int b = 9;
    cout<<(a == b)<<". 1 is not equal to 9 so false. Function returns 0."<<endl; 
    
    int limit = 20;
    int count = 10;
    cout<<((limit*count)/2>0)<< ". 200/2 is more then 0. Function is true and returns a 1."<<endl;
    
    int t=-4;
    int z = 0;
    cout<<(t > 5 || z<2)<< ". Although -4 is not more then 5, 0 is less then 2. Or condition met. Function is true and returns a 1."<<endl;
    
    int variable = -5;
    cout<<(!(variable >0))<<". Although the Function would return a 0 and be false ! makes it  return true therefore the Function returns 1."<<endl;
    
    int A=16;
    cout<<(A/4<8&&A>=4);
    
    int X=-2;
    int Y = 5;
    int Z= 0;
    cout<< (X*Y<10||Y*Z<10)<<". Both parts of the or statement return true so function returns 2 1's."<<endl;
    
    int j = -2;
    int k = 5;
    int l = 4;
    cout<< (!(j*l<10) || Y/X*4<Y*2)<< ". One part of the or statement is true so function returns one 1.";
    
    
    
}