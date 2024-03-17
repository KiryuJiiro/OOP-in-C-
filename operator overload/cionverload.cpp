#include<iostream>
using namespace std;

class info
{
public:
    string name;
    string address;

    friend istream& operator>>(istream& i,info& in);
};

istream& operator>>(istream& i,info& in)
{
    i>>in.name;
    i>>in.address;
    return i;
}

int main()
{
    info a;
    cout<<"Enter name and address:"<<endl; 
    cin>>a;
    cout<<"Your address is "<<a.address<<endl;
    cout<<"Your name is "<<a.name<<endl;
    return 0;
}