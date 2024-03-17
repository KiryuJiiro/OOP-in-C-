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
//     cout<<"your perimeter is "<<2*(a.getbreadth()+a.getlength());
//     cout<<"your area is "<<a.getbreadth()*a.getlength()<<endl;      
// }




// #include<iostream>
// using namespace std;

// class student
// {
//     string name;
//     string address;
//     int age;

//     public:
//     void setname()
//     {
//         cout<<"Enter name:";
//         cin>>name;
//     }
//     void setadd()
//     {
//         cout<<"Enter address:";
//         cin>>address;
//     }
//     void setage()
//     {
//         cout<<"Enter age:";
//         cin>>age;
//     }

    
// };

#include<iostream>
using namespace std;

class receiver
{
public:
    void receive(string s)
    {
        cout<<"Message is "<<s;
    }
};

class sender
{
public:
    void send(receiver y,string a)
    {
        y.receive(a);
    }
};

receiver aalu(receiver a)
{
    return a;    
}

int main()
{
    sender zero;
    receiver yamao;

    zero.send(yamao,"sukiii");
}

