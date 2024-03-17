// #include<iostream>
// using namespace std;

// class currency
// {
//     float nrp;
//     float usd;
// public:
//     void setnefoli(float n)
//     {
//         nrp=n;
//     }
//     float getnefoli()
//     {
//         return nrp/131.46;
//     }
//     void setengrish(float e)
//     {
//         usd=e;
//     }
//     float getengrish()
//     {
        
//         return usd*131.46;
//     }
// };

// int main()
// {
//     int choice;
//     float usd,nrp;
//     currency c;
//     cout<<"select usd or nrp"<<endl;;
//     cout<<"Press 1 for nrp to usd and 2 for usd to nrp:";
//     cin>>choice;
//     switch(choice)
//     {
//         case 1:
//         {
//             cout<<"Enter money in usd:";
//             cin>>usd;
//             c.setengrish(usd);
//             cout<<"your balance in nrp is=Rs "<<c.getengrish()<<endl;
//         }
//         break;
//         case 2:
//         {
//             cout<<"Enter money in nrp:";
//             cin>>nrp;
//             c.setnefoli(nrp);
//             cout<<"your balance in usd is= "<<c.getnefoli()<<"$"<<endl;
//         }
//         break;
//         default:
//         {
//             cout<<"please get a brain surgery and re-enter 1 or 2";
//         }
//     }
// return 0;
// }




// #include<iostream>
// using namespace std;

// class currency{
//     float amount;

//     public:
//     currency(float a)
//     {
//         amount=a;
//     }
//     float getmone()
//     {
//         return amount;
//     }
// };

// int main()
// {
//     float nrp,usd;
//     int choice;
//     label1:
//     cout<<"Please enter\n1) for USD to NRP and \n2) for NRP to USD"<<endl;
//     cin>>choice;

//     switch(choice)
//     {
//         case 1:
//         {
//             cout<<"Enter USD:";
//             cin>>usd;
//             currency us=currency(usd);
//             cout<<"your balance in rupee is Rs "<<(us.getmone()*131.46)<<endl;
//         }
//         break;
//          case 2:
//         {
//             cout<<"Enter NRP:";
//             cin>>nrp;
//             currency nr=currency(nrp);
//             cout<<"your balance in usd is "<<(nr.getmone()/131.46)<<"$"<<endl;
//         }
//         break;
//         default:
//         {
//             cout<<"Please re-enter the values"<<endl;
//             goto label1;
//         }
//     }
// return 0;
// }



// #include<iostream>
// using namespace std;

// class calc
// {
//     int length;
//     int breadth;
// public:
//     calc(int l,int b)
//     {
//         length=l;
//         breadth=b;
//     }

//     int getlength()
//     {
//         return length;
//     }
    
//     int getbreadth()
//     {
//         return breadth;
//     }
// };

// int main()
// {
//     int le,br;      
//     cout<<"Enter length and breadth:";
//     cin>>le>>br;
//     calc a=calc(le,br);
//     cout<<"your perimeter is "<<2*(a.getbreadth()+a.getlength())<<endl;
//     cout<<"your area is "<<a.getbreadth()*a.getlength()<<endl;      
// }

#include<iostream>
using namespace std;

class shape
{
    float area;
public:
    shape()
    {

    }

    shape(float height,float base)
    {
        area=0.5*height*base;
    }
    shape(float radius,char shape)
    {
        if(shape=='c')
            area=3.14*radius*radius;
    }
    shape(float length,float breadth,char shape)
    {
        if(shape=='r')
            area=length*breadth;
    }

    void getarea()
    {
        cout<<"your area is:"<<area;
    }
};

    int main()
    {
        int choice;
        float l,b,r,h,ba;
        label:
        cout<<"\nEnter\n1.Area of triangle \n2.Area of rectangle\n3.Area of circle\n4.Exit"<<endl;
        cout<<"Enter a choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter base and height of triangle:";
                cin>>h>>ba;
                shape triangle(h,ba);
                triangle.getarea();
                goto label;
            }
            break;
            case 2:
            {
                cout<<"Enter length and breadth of rectangle:";
                cin>>l>>b;
                shape rectangle(l,b,'r');
                rectangle.getarea();
                goto label;
            }
            break;
            case 3:
            {
                cout<<"Enter radius of circle:";
                cin>>r;
                shape circle(r,'c');
                circle.getarea();
                goto label;
            }
            break;
           case 4:
                exit(0);
                break;
           default:
           {
                cout<<"Invalid entry!!please re-enter the values";
                goto label;
           } 
        }
        return 0;
    }

// #include<iostream>
// using namespace std;

// class player
// {
//     int pno;
//     string pname;
//     int pmatch;
//     int *ngoals ;
// public:
//     player(int no,string name,int match)
//     {
//         int i;
//         pno=no;
//         pname=name;
//         pmatch=match;
//         ngoals=new int[pmatch];
//         for(i=0;i<pmatch;i++)
//         {
//             cout<<"Enter number of goals for "<<i+1<<"st match:";
//             cin>>ngoals[i];
//         }
//     }
//     void displaystats()
//     {
//         cout<<"Player name:"<<pname<<endl;
//         cout<<"Player no:"<<pno<<endl;
//         cout<<"No of matches:"<<pmatch<<endl;
//         int i;
//             for(i=0;i<pmatch;i++)
//             cout<<"Goals scored in "<<i+1<<"st match:"<<ngoals[i]<<endl;
//     }
//     ~player()
//         {
//             delete[] ngoals;
//         }
// };

// int main()
// {
//     string n;
//     int num,mat,i;
//     cout<<"Enter name of player:";
//     cin>>n;
//     cout<<"Enter number of matches:";
//     cin>>mat;
//     int go[mat];
//     cout<<"Enter player number:";
//     cin>>num;
//     player p1(num,n,mat);
//     p1.displaystats();
//     return 0;      
// }

// #include <iostream>
// using namespace std;

// class DemoDestructor {
// private:
//     int* data;
//     int size;

// public:
//     DemoDestructor(int arraySize) {
//         size=arraySize;
//         data = new int[size];
//         cout << "Memory allocated for the array of size " << size << "." << endl;
//     }

//     ~DemoDestructor() {
//         delete[] data;
//         cout << "Memory freed for the array of size " << size << "." << endl;
//     }
// };

// int main() {
//     DemoDestructor obj1(5);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class circle{
//     float radius;
// public:
//     circle(float ra)
//     {
//         radius=ra;
//     }
//     void calcarea()
//     {
//         float area;
//         area=3.1415*radius*radius;
//         cout<<"Area for your circle is:"<<area;
//     }
// };

// int main()
// {
//     float rad;
//     cout<<"Enter radius of circle:";
//     cin>>rad;
//     circle c1(rad);
//     c1.calcarea();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class bank
// {
//     string name;
//     string acc;
//     string type;
//     double balance;

// public:
//     void setvalues(string n,string a,string t,double b)
//     {
//         name=n;
//         acc=a;
//         type=t;
//         balance=b;
//     }

//     void deposit()
//     {
//         double dep;
//         cout<<"Enter amount you want to deposite:";
//         cin>>dep;
//         balance+=dep;
//         cout<<"\n";
//         cout<<"DEPOSITE TRANSACTION"<<endl;
//         cout<<"Balance deposited:"<<dep<<endl;
//         cout<<"New balance:"<<balance<<endl;
//     }

//     void withdraw()
//     {
//         double with;
//         cout<<"Enter amount you want to withdraw:";
//         cin>>with;
//         if(with>balance)
//         {
//             cout<<"Not enough balance"<<endl;
//         }
//         else
//         {
//             balance-=with;
//         }
//         cout<<"\n";
//         cout<<"WITHDRAW TRANSACTION"<<endl;;
//         cout<<"Amount withdrawn:"<<with<<endl;
//         cout<<"New balance:"<<balance<<endl;
//     }

//     void display()
//     {
//         cout<<"\n";
//         cout<<"ACCOUNT INFO"<<endl;
//         cout<<"Name:"<<name<<endl;
//         cout<<"Account number:"<<acc<<endl;
//         cout<<"Account type:"<<type<<endl;
//         cout<<"Balance:"<<balance;
//     }
// };

// int main()
// {
//     bank b1;
//     string acc_name,acc_number,acc_type;
//     double balan;
//     cout<<"Please enter account name:";
//     cin>>acc_name;
//     cout<<"Please enter account number:";
//     cin>>acc_number;
//     cout<<"Please enter account type:";
//     cin>>acc_type;
//     cout<<"Please enter balance:";
//     cin>>balan;
//     b1.setvalues(acc_name,acc_number,acc_type,balan);
//     b1.deposit();
//     b1.withdraw();
//     b1.display();
//     return 0;
// }
