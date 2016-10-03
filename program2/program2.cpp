//Scott Seagraves
//9/29/2016
//Distance FromMiles


#include <iostream>
#include <string>
using namespace std;



class DistanceFromMiles {
    public:
    
   void SetDistanceAsMeters (double D)     
   {   
    inputmiles_ = D*0.000621371;
     
   }

     double GetDistanceAsMeters ()       
 {
     
     
     return inputmiles_*1609.34;
 }
 
     void SetDistanceAsYards (double D)     
   {   
     inputmiles_ = D*0.000568182;
     
   }

     double GetDistanceAsYards ()     
 {
     
     
     return ( inputmiles_*1760);
 }
 
     void SetDistanceAsMiles (double D)     
   {   
     inputmiles_ = inputmiles_;
     
   }

     double GetDistanceAsMiles ()       
 {
     
     
     return ( inputmiles_);
 }
 
 
     void SetDistanceAsFeet (double D)
 {  
     inputmiles_ = inputmiles_;
     return;
 }

     double GetDistanceAsFeet ()      

 {   
     
     return inputmiles_*5280;
 }
 
      void SetDistanceAsInches(double D)           //sets value D
 {
    inputmiles_ = D*1.57828e-5; 
 }

    double GetDistanceAsInches ()
 {
     return inputmiles_*63360;
 }

    
    

     void PrintDistance1 ()
 {
     cout<< "  "<<endl;
     cout<< GetDistanceAsFeet() << " in feet" << endl;    //print statement

    
     cout<< GetDistanceAsMeters() << " in meters" << endl;
     
     cout<< GetDistanceAsInches()<< " in inches" << endl;
     cout<< GetDistanceAsMiles()<< " in miles" << endl;
     cout<< GetDistanceAsYards()<< " in yards" << endl;
     cout<< "  "<<endl;
 }

DistanceFromMiles ()                                             //defualt constructor
{
 inputmiles_=0;

}

DistanceFromMiles (double x)                                 //overloaded constructor
{
 inputmiles_=x;

}
    
    private:
    
    double inputmiles_;


}

;



int main ()
{
     // local variable declaration:
   string unittype = "";
   string miles = "miles";
   string meters = "meters";
   string yards = "yards";
   string inches = "inches";
   double unit = 0;
   string loop = "y";
    
    while (loop == "y")
    {
    
   cout<<"What unit will you be using (ex miles, meters, yards, or inches?)"<<endl;
   cin>>unittype;
 
   // check the boolean condition
   if( unittype == miles )
   {
       cout << "How many miles do you have?" << endl;
       cin>>unit;
       DistanceFromMiles miles1(unit);
       miles1.PrintDistance1 ();
       cout<<"Do you want to run again? (y/n)"<<endl;
       cin>>loop;
   }
   else if( unittype == meters )
   {
       cout << "How many meters do you have?" << endl;
       cin>>unit;
       DistanceFromMiles miles1(unit);
       miles1.PrintDistance1 ();
       cout<<"Do you want to run again? (y/n)"<<endl;
       cin>>loop;
   }
   else if( unittype == yards )
   {
       cout << "How many yards do you have?" << endl;
       cin>>unit;
       DistanceFromMiles miles1(unit);
       miles1.PrintDistance1 ();
       cout<<"Do you want to run again? (y/n)"<<endl;
       cin>>loop;
   }
   else if( unittype == inches )
   {
       cout << "How many inches do you have?" << endl;
       cin>>unit;
       DistanceFromMiles miles1(unit);
       miles1.PrintDistance1 ();
       cout<<"Do you want to run again? (y/n)"<<endl;
       cin>>loop;
   }
   else
   {
       cout << "Sorry your input can not be accepted. Please try again." << endl;
       cout<<"Do you want to run again? (y/n)"<<endl;
       cin>>loop;
   }
    }
   cout<< "Thanks for using Scott's Unit converter!"<<endl;
 
   return 0;
}
