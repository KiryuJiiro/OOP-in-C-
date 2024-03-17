#include<iostream>
using namespace std;

class access
{
public:
    int x;
private:
    int y;
protected:
    int z;

public:
    void idk()
    {
        y=5;
        cout<<"Private data accessed using member function:"<<y<<endl;
    }
};

class specifiers:public access
{
    public:
    void display()
    {
        z=3;
        cout<<"protected data accessed from inherited class:"<<z<<endl;
    }
};

int main()
{
    specifiers s;
    access a;
    a.x=2;
    cout<<"Public data can be accessed from anywhere"<<a.x<<endl;
    a.idk();
    s.display();
    return 0;
}