#include<iostream>
using namespace std;

class incr
{
public:

    int marks;

    incr(int m)
    {
        marks=m;
    }

    incr operator--()
    {
        marks--;
        return incr(marks);
    }
};

int main()
{
    incr m(70);
    --m;
    cout<<m.marks;
    return 0;
}

//1)Structure of cpp
//2)Tokens
//3)Data types
//4)Operators(scope resolution,new,delete)
//5)manipuators(endl,setw())
//6)control structures
//7)type conversion
//inline function

//class and object
//access modifier
//static keyword
//object as argument;by value/by reference
//constructor-types
//destructor 
//friend function

//operator overload
//unary load using friend and member
//binary load using friend and member
//insertion and extraction operator
//operators that cannot be overloaded

//inheritance concept
//types of inheritance
//ambuigity in multiple inheritance aka diamond problem
//abstract class(pure virtual)
//aggregation
//constructor and destructor in derived 