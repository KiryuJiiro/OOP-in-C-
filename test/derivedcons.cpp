#include<iostream>
using namespace std;

class parent{
public:
    string height;
    string color;

    parent(string h,string c)
    {
        height=h;
        color=c;
        cout<<"Parent constructor call"<<endl;
    }

    ~parent()
    {
        cout<<"parent destructor call"<<endl;
    }
};

class child:public parent
{
public:
    string race;

    child(string h,string c,string r):parent(h,c)
    {
        race=r;
        height=h;
        color=c;
        cout<<"Child constructor call"<<endl;
    }

    ~child()
    {
        cout<<"child destructor call"<<endl;
    }
};

int main()
{
    child c1("69ft","Nigerian","black");
    cout<<c1.color<<endl;
    cout<<c1.height<<endl;
    cout<<c1.race<<endl;
}

