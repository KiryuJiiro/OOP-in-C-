#include<iostream>
using namespace std;

class geometry{
public:
virtual void drawline()=0;//initializing data abstraction
};

class line:public geometry{
public:
    void drawline()
    {
        cout<<"Drawing a line...."<<endl;
    }
};

class polygon:public geometry{
public:
    void drawline()
    {
        cout<<"Drawing multiple lines..."<<endl;
    }
};

class hexagon:public geometry{
public:
    void linedraw()
    {
        cout<<"Drawing l i n e s";
    }
};


int main()
{
    line l;
    polygon p;
    //hexagon h; not allowed beause of abstraction
    l.drawline();
    p.drawline();
}