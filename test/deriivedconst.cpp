#include<iostream>
using namespace std;

class parent
{
public:
    string name;

    parent(string n)
    {
        name=n;
    }
};

class child:public parent
{
public: 
    string address;

    child(string a,string n):parent(n)
    {
        address=a;
    }

};

int main()
{
    child c1("x","a");
    cout<<c1.address<<endl;
    cout<<c1.name;
    return 0;
}