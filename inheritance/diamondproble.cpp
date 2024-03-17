#include<iostream>
using namespace std;

class a{
public:
    void highest()
    {
        cout<<"This is the base class call"<<endl;
    }
};

class b:virtual public a{
public:
     void second()
     {
        cout<<"First derived"<<endl;
     }
};

class c:virtual public a{
public:
    void third()
    {
        cout<<"Second derived"<<endl;
    }
};

class d:public b,public c{
public:
    void final()
    {
        cout<<"This is the final derived class"<<endl;
    }
};

int main()
{
    d obj1;
    obj1.final();
    obj1.third();
    obj1.second();
    obj1.highest();
}