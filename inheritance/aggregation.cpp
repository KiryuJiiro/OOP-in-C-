//used to inherit certain aspects of class works using "has a" concept

#include<iostream>
using namespace std;

class animal{
public:
    string color;
    string gills;
    string lungs;

    animal(){}

    animal(string c,string g,string l){
        color=c;
        gills=g;
        lungs=l;
    }
};


class mammals{
animal mammal;
string viviparous;
public:
    mammals(string v,animal m)
    {
        viviparous=v;
        mammal=m;
    }
    
    void displayinfomammal()
    {
        cout<<"Mammals "<<viviparous<<endl;
        cout<<"It is of color "<<mammal.color<<endl;
        cout<<"It is "<<mammal.lungs<<endl;

    }
};

class amphibians{
string oviparous;
animal amphibian;
public:
    amphibians(string o,animal a)
    {
        oviparous=o;
        amphibian=a;
    }

    void displayinfoamphibian()
    {
        cout<<"Amphibians "<<oviparous<<endl;
        cout<<"It is of color "<<amphibian.color<<endl;
        cout<<"It is "<<amphibian.gills<<endl;

    }
};

int main()
{
    animal a("Black","Aquatic","Terristrial");
    mammals m1("Direct birth",a);
    amphibians am("Lays eggs",a);
    cout<<"FOR MAMMALS:"<<endl;
    m1.displayinfomammal();
    cout<<"\n";
    cout<<"FOR AMPHIBIAN:"<<endl;
    am.displayinfoamphibian();
    return 0;    
}