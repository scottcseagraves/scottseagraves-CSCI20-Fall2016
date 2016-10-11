//Scott Seagraves
//10/5/2016
//Taxes



#include <iostream>
#include <string>
using namespace std;

class taxconvertersingle{
    public:
    
     taxconvertersingle (){
        income_ = 0;
        withheld_ = 0;
    }
    
    taxconvertersingle (double x,double y){
        income_ = x;
        withheld_= y;
        
    }
    
    void settaxes (double t,double w)
    {
        if (income_ <= 8925) { 
            income_ = t*.10 ;
            
        }
        else if (8926 <= income_ && income_ <= 36250){
            income_ = t*.15 + 892.50;
            
        }
        else if (36251 <= income_ && income_ <= 87850){
            income_ = t*.25 + 4991.25;
        }
        else  (87851 <= income_ );{
            income_ = t*28 + 17891.25;
            
        };
        
    
    }
    
    double gettaxes()
    {
        return income_ ;
        
    
    }
 

    private:
    
    double income_;
    double withheld_;
    
    
    
};

class taxconvertermarried{
    public:
    
    taxconvertermarried (){
        income_ = 0;
        withheld_ = 0;
    }
    
    taxconvertermarried(double x, double y){
        income_ = x;
        withheld_= y;
        
    }
    
    
    
    void settaxes ()
    {
        if (income_ <= 17850) {
            
        }
        else if (17851 <= income_ && income_ <= 72500){
            
        }
        else (72501 <= income_);{
            
        }
    
    }
    
    double returntaxes()
    {
    
    }
 
    
    private:
    
    double income_;
    double withheld_;
    
    
    
};

    void PrintTaxes ()
 {
     cout<< "Your return is "<< gettaxes() <<endl;
     
 }
    
int main ()
{
    string rerun = "y";
    string status = "";
    string married = "married";
    string single = "single";
    string person = "";
    double grossincomex = 0;
    double withheldy = 0;
   
    
    while (rerun == "y")
    
{   cout<< "What is the filing status of person? (single/married)"<<endl;
    cin>>status;
    
    if (status == "married"){
        
        cout<< "would you like to run this program again? (y/n)"<<endl;
        cin>>rerun;
        
    }
    
    else if (status == "single"){
        cout<< "How much did they earn this year?"<<endl;
        cin>>grossincomex;
        cout<< "How much was withheld?"<<endl;
        cin>>withheldy;
        taxconvertersingle tax1(grossincomex,withheldy);
        tax1.PrintTaxes ();
        cout<< "would you like to run this program again? (y/n)"<<endl;
        cin>>rerun;
    }
        
        
        
        
        
        
        
        
    }
}
