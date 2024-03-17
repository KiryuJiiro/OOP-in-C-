
#include<iostream>
using namespace std;

class record
{
    string name;
    int age;
public:
    record()
    {

    }

    record(string n,int a)
    {
        name=n;
        age=a;
    }

    string getname()
    {
        return name;
    }

    int getage()
    {
        return age;
    }

    bool operator>(record r)
    {
        if(age>r.age)
            return true;
        else
            return false;
    }
};

int main()
{
    string name1,name2;
    int age1,age2;
    cout<<"Enter your name for first record:";
    cin>>name1;
    cout<<"Enter your age for first record:";
    cin>>age1;
    cout<<"Enter your name for second record:";
    cin>>name2;
    cout<<"Enter your age for second record:";
    cin>>age2;
    record Zero(name1,age1),X(name2,age2);
    if(Zero>X)
    {
        cout<<Zero.getname()<<" is older than "<<X.getname()<<endl;
        cout<<Zero.getname()<<"'s age:"<<Zero.getage()<<endl;
        cout<<X.getname()<<"'s age:"<<X.getage()<<endl;
    }   
    else
    {
        cout<<X.getname()<<" is older than "<<Zero.getname()<<endl;
        cout<<Zero.getname()<<"'s age:"<<Zero.getage()<<endl;
        cout<<X.getname()<<"'s age:"<<X.getage()<<endl;
    }
return 0;
}


