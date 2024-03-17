#include<iostream>
using namespace std;

class employee
{
public:
    int id;
    string name;

    employee()
    {

    }

    employee(int i,string n)
    {
        id=i;
        name=n;
    }

    int getid()
    {
        return id;
    }

    string getname()
    {
        return name;
    }
};

class parttimeemployee:public employee
{
    int dailywage;

public:
    parttimeemployee(int d,int i,string n):employee(i,n)
    {
        dailywage=d;     
    }

    int getdaily()
    {
        return dailywage;
    }
};

class fulltimeemployee:public employee
{
    int salary;

public:
    fulltimeemployee(int s,int i,string n):employee(i,n)
    { 
        salary = s;      
    }

    int getsalary()
    {
        return salary;
    }
};

int main()
{
    parttimeemployee p1(4000,1,"X");
    fulltimeemployee f1(9000,2,"Zero");
    cout<<"FOR PART TIME EMPLOYEE"<<endl;
    cout<<"Dailywage:"<<p1.getdaily()<<endl;
    cout<<"Id:"<<p1.getid()<<endl;
    cout<<"Name:"<<p1.getname()<<endl;
    cout<<"\n";
    cout<<"FOR FULL TIME EMPLOYEE"<<endl;
     cout<<"Salary:"<<f1.getsalary()<<endl;
    cout<<"Id:"<<f1.getid()<<endl;
    cout<<"Name:"<<f1.getname()<<endl;
    return 0;
}
