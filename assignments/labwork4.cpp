// #include<iostream>
// using namespace std;

// class input
// {
// public:
//     int n1,n2;

//     input(){}

//     input(int a,int b)
//     {
//         n1=a;
//         n2=b;
//     }
// };

// class sum:public input
// {
// public:
//     int add;

//     sum(){}

//     sum(int a,int b):input(a,b)
//     {
//         add=a+b;
//     }

//     void showsum()
//     {
//         cout<<"Sum is:"<<add<<endl;
//     }
// };

// int main()
// {
//     sum a(6,7);
//     a.showsum();    
// }


// #include<iostream>
// using namespace std;

// class marks
// {
// public:
//     float math,oop,discrete;

//     marks(){}

//     marks(float m,float o,float d)
//     {
//         math=m;
//         oop=o;
//         discrete=d;
//     }
// };

// class total:public marks
// {
// public:
//     float sum;

//     total(){}

//     total(float m,float o,float d):marks(m,o,d)
//     {
//         sum=m+o+d;
//     }

//     void dissum()
//     {
//         cout<<"Total is:"<<sum<<endl;
//     }
// };

// class percent:public total
// {
// public:
//     float sum,per;

//     percent(){}

//     percent(float m,float o,float d):total(m,o,d)
//     {
//         sum=m+o+d;
//         per=sum/300*100;      
//     }

//     void dispercent()
//     {
//         cout<<"Percentage is:"<<per<<endl;
//     }
// };

// int main()
// {
//     percent p(50,70,90);
//     p.dissum();
//     p.dispercent();
// }


// #include<iostream>
// using namespace std;

// class two;
// class one{
// private:
//     int number1;

//     void setdata()
//     {
//         number1=9;
//     }

//     friend void exchange(one o,two t);
// };

// class two{
// private:
//     int number2;

//     void setdata1()
//     {
//         number2=6; 
//     }

//     friend void exchange(one o,two t);
// };
// void exchange(one o,two t)
// {
//     o.setdata();
//     t.setdata1();
//     cout<<"Before exchange:One="<<o.number1<<" Two="<<t.number2<<endl;
//     int temp;
//     temp=o.number1;
//     o.number1=t.number2;
//     t.number2=temp;
//     cout<<"After exchange:One="<<o.number1<<" Two="<<t.number2<<endl;
// }

// int main()
// {
//     one o1;
//     two t1;
//     exchange(o1,t1);
// }

// #include<iostream>
// using namespace std;

// class a{
// public:
//     void highest()
//     {
//         cout<<"This is the base class call"<<endl;
//     }
// };

// class b:public a{
// public:
//      void second()
//      {
//         cout<<"First derived"<<endl;
//      }
// };

// class c:public a{
// public:
//     void third()
//     {
//         cout<<"Second derived"<<endl;
//     }
// };

// class d:public b,public c{
// public:
//     void final()
//     {
//         cout<<"This is the final derived class"<<endl;
//     }
// };

// int main()
// {
//     d obj1;
//     obj1.final();
//     obj1.third();
//     obj1.second();
//     obj1.highest();
// }


#include<iostream>
using namespace std;

class bank
{
public:
    string acc_no;
    string acc_name;
    float balance;

    bank(string no,string na,float b)
    {
        acc_no=no;
        acc_name=na;
        balance=b;
    }

    void displaydata()
    {
        cout<<"Account number:"<<acc_no<<endl;
        cout<<"Account name:"<<acc_name<<endl;
        cout<<"Balance:"<<balance<<endl;
    }

    void deposite()
    {
        float dep;
        cout<<"Current balance:"<<balance<<endl;
        cout<<"Enter deposite amount:";
        cin>>dep;
        balance+=dep;
        cout<<"New balance="<<balance<<endl;
    }

    void withdraw()
    {
        cout<<"Current balance"<<balance<<endl;
        float with;
        cout<<"Enter withdraw amount:";
        cin>>with;
        if(with>balance)
        {
            cout<<"Insuffiicent balance";
        }
        else
        {
            balance-=with;
            cout<<"New balance="<<balance;
        }
    }
};

int main()
{
    string name,number;
    float amount;
    cout<<"Enter Account name,number and balance:";
    cin>>name>>number>>amount;
    bank b(number,name,amount);
    b.displaydata();
    b.deposite();
    b.withdraw();
}