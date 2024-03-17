#include<iostream>
using namespace std;

class two;

class one
{
    int x;
    int y;

public:
    void setdata()
    {
        cout<<"Enter two data:";
        cin>>x>>y;
    }

    friend class two;
};

class two
{
public:
    void display(one obj)
    {
        cout<<obj.x;
    }
};

int main()
{
    one t;
    t.setdata();
    two t1;
    t1.display(t);
}