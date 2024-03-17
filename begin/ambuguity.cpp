#include<iostream>
using namespace std;

class A
{
public:
    void method1()
    {
        cout<<"This is the base class"<<endl;
    }
};


class B:public A
{
public:
    void method2()
    {
        cout<<"This is the 2nd base class"<<endl;
    }
};


class C:public A
{
public:
    void method3()
    {
        cout<<"This is the third base class"<<endl;
    }
};


class D:public B,public C
{
public:
    void method4()
    {
        cout<<"This is fourth the base class"<<endl;
    }
};

int main()
{
    D obj;
    obj.B::method1();
    obj.method2();
    obj.method3();
    obj.method4();

}