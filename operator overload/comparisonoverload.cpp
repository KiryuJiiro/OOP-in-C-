#include<iostream>
using namespace std;

class position
{
public:
    int ranking;

    position(int r)
    {
        ranking=r;
    }

    bool operator>(position r1)
    {
        if(ranking>r1.ranking)
            return true;
        else 
            return false;
    }
};

int main()
{
    position a1(51),a2(9);
    if(a2>a1)
        cout<<"A2 is greater than A1";
    else
        cout<<"A1 is greater than A2";
    return 0;
}
