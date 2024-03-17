#include<iostream>
using namespace std;

void display(int n=5,char c='*')
{
    for(int i = 1;i<=n;i++)
    {
        cout<<c<<endl;
    }
}

int main()
{
    display();
}