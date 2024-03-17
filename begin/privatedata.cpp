#include<iostream>
using namespace std;

class employee{
    string name;
    string age;
public:
    employee(string n="null",string a="null")
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
    
};
