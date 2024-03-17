#include<iostream>
using namespace std;
class a
{
    public:

        void number()
        {
            cout<<"number is first";
        }
};

class b :virtual  public a
{
    public:
        void blank()
        {
            cout<<"number is second";
            
        }

};
class c:virtual public a 
{
    public:
    void  hell()
    {
        cout<<"number is thrd";
    }

};

class d:public b,public c
{
    public:
    void hello()
    {
        cout<<"hudfhjkd";
    }
   
};
int main()
{
    d D;
    D.hello();
    D.blank();
    D.hell();
    D.number();
    return 0;
    



}


