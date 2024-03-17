#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char c='c';
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try
    {
        if(a==0&&b==0)
            throw(c);

        else if(b==0)
        {
            throw(b);
        }
        else
        {
            cout<<"Division is:"<<(float)a/b<<endl;
        }
    }

    catch(int x)
    {
        cout<<"Error denominator cannot be 0, b="<<x<<endl;
    }

    catch(char y)
    {
        cout<<"Both cannot be zero"<<endl;
    }
    return 0;
}