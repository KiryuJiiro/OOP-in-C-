#include<iostream>
using namespace std;

class info
{
public:
    string name;
    string address;

    friend istream& operator>>(istream& i,info& in);
    friend ostream& operator<<(ostream& o,info& i);
};

istream& operator>>(istream& i,info& in)
{
    i>>in.name;
    i>>in.address;
    return i;
}

ostream& operator<<(ostream& o,info& i)
{
    o<<i.address<<endl;
    o<<i.name<<endl;
    return o;
}

int main()
{
    info a;
    cout<<"Enter name and address:"<<endl; 
    cin>>a;
    cout<<a;
    return 0;
}