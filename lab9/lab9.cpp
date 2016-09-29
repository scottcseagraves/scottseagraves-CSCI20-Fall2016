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



int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
    return 0;
}