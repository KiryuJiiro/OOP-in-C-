#include<iostream>
using namespace std;

class parent
{
public:
    void animal()
    {
        cout<<"Animal kingdom";
    }
};

class child:public parent
{
public:
    void dog()
    {
        cout<<"Bau Bau";
    }
};

int main()
{
    child c1;   
    c1.animal();
}