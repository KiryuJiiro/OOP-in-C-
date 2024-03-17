#include<iostream>
using namespace std;

class display
{
private:
    int dis1;
    
public:
    void setdis(int d)
    {
        dis1=d;
    }

   friend void displaysomething(display obj);
};
void displaysomething(display obj)
{
    cout<<"Something:"<<obj.dis1;
}

int main()
{
    display d1,d2;   
    d1.setdis(30);
    d2.setdis(50);
    displaysomething(d1);
    displaysomething(d2);
}


