#include<iostream>
using namespace std;

class sadge
{
public:
    int x,y,z;

    sadge(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
};

int main()
{
    sadge s(12,13,14);
    cout<<s.x<<endl;
    cout<<s.y<<endl;
    cout<<s.z<<endl;
    return 0;
}


