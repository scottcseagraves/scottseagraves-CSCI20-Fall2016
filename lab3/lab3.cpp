
//Scott Seagraves
//8/29/2016
//Mad Lib
//stolen from http://www.madglibs.com/libs/188.html

#include <iostream>
#include <string>
using namespace std;

int main()
{
std:: 

   string noun1 = "";
   string noun2 = "";
   string noun3  = "";
   string noun4 = "";
   string place = "";
   string adjective = "";
   
cout<<"Welcome to Scott's mad lib."<<endl;

cout<<"Please choose a noun."<<endl;
cin>>noun1;

cout<<"Please choose a plural noun."<<endl;
cin>>noun2;

cout<<"Please choose a another noun."<<endl;
cin>>noun3;

cout<<"Please choose a place."<<endl;
cin>>place;

cout<<"Please choose a adjective."<<endl;
cin>>adjective;

cout<<"Please choose a another noun (last on I promise)."<<endl;
cin>> noun4;

cout<<"Be kind to your "<< noun1<<"-footed "<<noun2<< " For a duck may be somebody`s "<< noun3<<", Be kind to your "<<endl;
cout<<noun2<< " in "<< place<< " Where the weather is always "<<adjective <<". You may think that this is the "<< noun4 << ", Well it is."<<endl;

return 0;
}
