//Scott Seagraves
//9/29/2016
//Return Values Kilo to Lbs and Lbs to Kilos

#include <iostream>
#include <string>
using namespace std;

float tokilo(float lbs)      //function lbs to kilos
{
    float k = lbs * 0.453592;
    return  k;
}

float tolbs(float k)          //function kilos to lbs
{
   float lbs = k * 2.20462;
    return lbs;
}

int main()
{
    float k = 0;                //defining variables
    float lbs = 0;
    string anykey="";
    
    cout<< "How many kilograms do you have?"<<endl;    //getting input for kilo to lbs
    cin>>k;
    cout<< "You have "<< tolbs(k)<< " Pounds."<< endl;
    cout<< ""<<endl;
    
    
    cout<< "How many pounds do you have?"<<endl;      //getting input for lbs to kilo
    cin>>lbs;
    cout<< "You have "<< tokilo(lbs)<< " Kilos."<< endl;
    cout<< ""<<endl;
    
    cout<< "Thanks for using Scott's automatic conversion program. Press any key and enter to exit."<<endl;
    cin>>anykey;
}

