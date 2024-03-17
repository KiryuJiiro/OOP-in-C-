#include<iostream>
using namespace std;

class origin
{
public:
    static void display()
    {
        cout<<"Welcome to the void";
    }
};

int main()
{
    origin::display();
    return 0;
}