#include<iostream>
using namespace std;

class staff
{
public:
    string code;
    string name;

    void getdata()
    {
        cout<<code<<endl;
        cout<<name<<endl;
    }
};

class staff:public staff
{
public:
    string code;
    string name;

    void getdata()
    {
        cout<<code<<endl;
        cout<<name<<endl;
    }
};


int main()
{
    staff s;
    s.code=115;
    s.name="idkanymore";
    s.getdata();
}