//the problem
// #include<iostream>
// using namespace std;

// class parent
// {
// public:
//     void getrekt()
//     {
//         cout<<"The base class"<<endl;
//     }
// };

// class child:public parent
// {
// public:
//     void getrekt()
//     {
//         cout<<"The derived class"<<endl;
//     }
// };

// int main()
// {
//     parent p1;
//     p1.getrekt();
//     child c1;
//     c1.getrekt();
//     parent *obj1=new child();
//     obj1->getrekt();//calls the parent class method
//     return 0;
// }

//the solution

// #include<iostream>
// using namespace std;

// class parent
// {
// public:
//     virtual void getrekt()
//     {
//         cout<<"The base class"<<endl;
//     }
// };

// class child:public parent
// {
// public:
//     void getrekt()
//     {
//         cout<<"The derived class"<<endl;
//     }
// };

// int main()
// {
//     parent p1;
//     p1.getrekt();
//     child c1;
//     c1.getrekt();
//     parent *obj1=new child();
//     obj1->getrekt();//calls the base class method
//     delete obj1;
//     return 0;
// }

#include<iostream>
using namespace std;

class data
{
public:
    int a;

    data(int a)
    {
        this->a=a;
    }
}

int main()
{
    int data1=5;
    data d1(5);
    cout<<d1.a;
    return 0;
}