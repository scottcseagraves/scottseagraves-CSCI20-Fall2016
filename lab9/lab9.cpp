//Scott Seagraves
//9/29/2016
//Temp From Kelvin


#include <iostream>
#include <string>
using namespace std;



class TemperatureConverter {
    public:
    
   void SetTempFromFahrenheit (double k)     
   {   
     kelvin_ = (5 * (k -32)/9) + 273.15;
     
   }

     void SetTempFromCelcius (double k)
 {  
     kelvin_ = k + 273.15;
     return;
 }

     double GetTempAsFahrenheit ()       //gets value as fahrenheit
 {
     
     
     return (( kelvin_ - 273.15*9)/5 + 32);
 }

     double GetTempAsCelcius ()      //gets value as celcius

 {   
     
     return kelvin_ - 273.15;
 }

    double GetTempFromKelvin ()
 {
     return kelvin_;
 }
     void SetTempFromKelvin(double k)           //sets value k
 {
    kelvin_ = k; 
 }
    
    

     void PrintTemps ()
 {
     cout<< "  "<<endl;
     cout<< GetTempAsCelcius() << " Celsius" << endl;    //print statement

    
     cout<< GetTempAsFahrenheit() << " Fahrenheit" << endl;
     
     cout<< GetTempFromKelvin()<< " Kelvin" << endl;
     cout<< "  "<<endl;
 }

TemperatureConverter ()                                             //defualt constructor
{
 kelvin_=0;

}

TemperatureConverter (double x)                                 //overloaded constructor
{
 kelvin_=x;

}
    
    private:
    
    double kelvin_;


}

;



