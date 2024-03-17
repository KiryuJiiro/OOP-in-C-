#include<iostream>
using namespace std;

class c1
{
public:
    static int x;
};

int c1::x=10;

int main()
{
    c1 d1,d2;
    cout<<d1.x<<endl;
    cout<<d2.x;

}