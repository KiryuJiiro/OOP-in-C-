#include<iostream>
using namespace std;

class student
{
public:
    int x,y;

    student(int x,int y)
    {
        this->x=x;
        this->y=y;
    }

    void display()
    {
        cout<<x<<endl;
        cout<<y<<endl;
    }
};

int main()
{
    student s(3,4);
    s.display();
    return 0;
}