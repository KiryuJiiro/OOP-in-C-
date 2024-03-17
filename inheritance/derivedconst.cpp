#include<iostream>
using namespace std;

class sports
{
public:
    int duration;
    string type;

    sports(int d,string t)
    {
        duration=d;
        type=t;

        cout<<"Base class constructor"<<endl;
    }

    ~sports()
    {
        cout<<"Base class destructor"<<endl;
    }
};

class league:public sports
{
public:
    string players;
    league(string p,int d,string t):sports(d,t)
    {
        players=p;

        cout<<"Derived constructor"<<endl;
    }

    ~league()
    {
        cout<<"Derived desructor call"<<endl;
    }
};

int main()
{
    cout<<"CONSTRUCTOR CALL"<<endl;
    league lol("Toxic",45,"indoor");
    cout<<"\n";
    cout<<"DERIVED CLASS VALUE ASSIGN"<<endl;
    cout<<"League players are "<<lol.players<<endl;
    cout<<"Leagues match duration is "<<lol.duration<<" minutes"<<endl;
    cout<<"League is a "<<lol.type<<" game"<<endl;
    cout<<"\n";
    cout<<"AUTO DESTRUCTOR CALL"<<endl;
}