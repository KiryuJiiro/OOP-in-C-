#include<iostream>
using namespace std;
template <class T>
class first
{
    public :
    T x;

    first(T a)
    {
        x=a;

    }
};
int main()
{ 
    first<int> f(3);
    cout<<"value of a is :"<<f.x<<endl;

}