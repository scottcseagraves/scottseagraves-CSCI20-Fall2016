//Scott Seagraves
//9/8/2016
//Monster Lab


#include <iostream>
#include <string>
using namespace std;


struct monster {
    string Name;
    string Head;
    string Eyes;
    string Ears;
    string Nose;
    string Mouth;
};

int main()



{ monster numberone;

    numberone.Name = "OneMonster:";
    numberone.Head = "Zombus";
    numberone.Eyes = "Spritem";
    numberone.Ears = "Vegitas";
    numberone.Nose = "None";
    numberone.Mouth = "Wackus";
    
    cout<< numberone.Name<<endl;
    cout<< numberone.Head<<endl;
    cout<< numberone.Eyes<<endl;
    cout<< numberone.Ears<<endl;
    cout<< numberone.Nose<<endl;
    cout<< numberone.Mouth<<endl;
    cout<< "      "<<endl;
    
    


monster numbertwo;
    
    numbertwo.Name = "Albert:";
    numbertwo.Head = "Happy";
    numbertwo.Eyes = "Spritem";
    numbertwo.Ears = "Vegitas";
    numbertwo.Nose = "Spritem";
    numbertwo.Mouth = "Wackus";
    
    cout<< numbertwo.Name<<endl;
    cout<< numbertwo.Head<<endl;
    cout<< numbertwo.Eyes<<endl;
    cout<< numbertwo.Ears<<endl;
    cout<< numbertwo.Nose<<endl;
    cout<< numbertwo.Mouth<<endl;
    
    cout<< "      "<<endl;
    
    monster numberthree;
    
    numberthree.Name = "Fred:";
    numberthree.Head = "Zombus";
    numberthree.Eyes = "Vegitas";
    numberthree.Ears = "Vegitas";
    numberthree.Nose = "Spritem";
    numberthree.Mouth = "Wackus";
    
    cout<< numberthree.Name<<endl;
    cout<< numberthree.Head<<endl;
    cout<< numberthree.Eyes<<endl;
    cout<< numberthree.Ears<<endl;
    cout<< numberthree.Nose<<endl;
    cout<< numberthree.Mouth<<endl;
    
    cout<< "      "<<endl;
    
      monster numberfour;
    
    numberfour.Name = "Mark:";
    numberfour.Head = "Wackus";
    numberfour.Eyes = "Spritem";
    numberfour.Ears = "Vegitas";
    numberfour.Nose = "Spritem";
    numberfour.Mouth = "Wackus";
    
    cout<< numberfour.Name<<endl;
    cout<< numberfour.Head<<endl;
    cout<< numberfour.Eyes<<endl;
    cout<< numberfour.Ears<<endl;
    cout<< numberfour.Nose<<endl;
    cout<< numberfour.Mouth<<endl;
     cout<< "      "<<endl;
}