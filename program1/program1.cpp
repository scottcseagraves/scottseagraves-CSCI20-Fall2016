//Scott Seagraves
//9/12/2016
//program 1 Wageslip



#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name1  = "";
    string name2  = "";
    float g = 0;
    float r = 0;
    float h = 0;
    float n = 0;

    
    
    
    cout<< "Who do you want to calculate pay for?"<<endl;
    cin>>name1;
    cout<< "What is their hourly wage?"<<endl;
    cin>>r;
    cout<< "How many hours did they work?"<<endl;
    cin>>h;
    cout<< "View wage slip? (y/n)"<<endl;
    cin>>name2;
    
 g = r * h;
 n = g * 0.83;
    
    cout<<"The wage slip for "<< name1 << " is as follows. Hours worked = "<< h << ". Rate of pay = $" <<r<< " an hour. Gross income is $"<<g<< ". And the net income is $"<<n<<endl;
    return 0;
}