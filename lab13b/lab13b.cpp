//Scott Seagraves
//10/12/2016
//time loop (For Expansion)

#include <iostream>
#include <string>
using namespace std;

int main()

{
    int x = 0;
    int y = 0;
    int a = 1;
    int b = 2;
    int t = 00;
    int u = 0;
    int f = 0;
    
    for (t=0;00<=t && t<59;t++)
    
    {
    ;
    
    if (t<10) {
    cout<< "The current time is "<< a << ":"<< f<< t<< ". PM "<<endl ;
    }
    else
    {
    cout<< "The current time is "<< a << ":"<< t<< ". PM "<<endl ;
    }   
        
        
    }
    
    ;
    
    for (t=0;00<=t && t<60;t++)
    
    {
         if (t<10) {
    cout<< "The current time is "<< b << ":"<< f<< t<< ". PM "<<endl ;
    }
    else
    {
    cout<< "The current time is "<< b << ":"<< t<< ". PM "<<endl ;
    }   
        
       ;   
    }
    ;
  
    

        

        

    
    cout<<"What is start hour?"<<endl;
    cin>>u;
    
    cout<<"What is the end hour?"<<endl;
    cin>>f;
    
    
    
    for (x=0, t = 0;u<f;t= t + 15)
    
    {
         if (t<10) {
    cout<< "The current time is "<< u << ":"<< x<< t<< ". PM "<<endl ;
    }
    else if (10<= t && t<59)
    {
    cout<< "The current time is "<< u << ":"<< t<< ". PM "<<endl ;
   
    
    }  
    
    else if (t>59)
       
       { u = u + 1;
       t = t - 75;
       }
     
       
       
        
       ;   
       
       
       
    }
       
       
    
    

    
    
    
}