// #include<iostream>
// using namespace std;

// class teacher
// {
//     int tid;
//     string subject;

// public:
//     void setid()
//     {
//         cout<<"Enter student id:";
//         cin>>tid;
//     }

//     void setsub()
//     {
//         cout<<"Enter subject:";
//         cin>>subject;
//     }
    
//     void getid()
//     {
//         cout<<"ID:"<<tid<<endl;
//     }

//     void getsub()
//     {
//         cout<<"Subject:"<<subject<<endl;
//     }
// };


// class staff{
//     int sid;
//     string position;
// public:
//     void setiden()
//     {
//         cout<<"Enter staff id:";
//         cin>>sid;
//     }
//     void setpos()
//     {
//         cout<<"Enter position:";
//         cin>>position;
//     }

//     void getiden()
//     {
//         cout<<"Staff id:"<<sid<<endl;
//     }

//     void getpos()
//     {
//         cout<<"Position:"<<position<<endl;
//     }
// };

// class coordinator:public teacher,public staff{

// string department;

// public:
//     void setdep()
//     {
//         cout<<"Enter department:";
//         cin>>department;
//     }

//     void getdep()
//     {
//         cout<<"Department:"<<department<<endl;
//     }
// };

// int main()
// {
//     coordinator c;
//     c.setid();
//     c.setsub();
//     c.setiden();
//     c.setpos();
//     c.setdep();
//     c.getid();
//     c.getsub();
//     c.getiden();
//     c.getpos();
//     c.getdep();
//     return 0;
// }




// #include<iostream>
// using namespace std;

// class Account
// {
//     public:
//     int accnum;
//     int balance;
//     static int min_balance;
    

//     void setdata()
//     {
//         cout<<"Enter account number:";
//         cin>>accnum;
//         cout<<"Enter balance:";
//         cin>>balance;
//         cout<<"Enter minumun balance:";
//         cin>>min_balance;
//     }


//     void getdata()
//     {
//         cout<<"Acc number is:"<<accnum<<endl;
//         cout<<"Balance is:"<<balance<<endl;
//     }

//     static void min()
//     {
//         cout<<"Minimum balance:"<<min_balance<<endl;
//     }
// };

// int Account::min_balance=0;

// int main()
// {
//     Account a[5];
//     for(int i=0;i<5;i++)
//     {
//         cout<<"Enter data for "<<i+1<<" account"<<endl;
//         a[i].setdata();
//     }
//     for(int j=0;j<5;j++)
//     {
//         cout<<"data of "<<j+1<<" account"<<endl;
//         a[j].getdata();
//         Account::min();
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter two values:";
//     cin>>a>>b;
//     try
//     {
//     if(b==0)
//         {
//             throw b;
//         }
//     else
//         {
//             cout<<"a/b="<<float(a/b)<<endl;
//         }
//     }
//     catch(int x)
//     {
//         cout<<"Exception b="<<x;    
//     }
// }



// #include<iostream>
// using namespace std;

// class example
// {
// public:
//     int length;

//     example(int length)
//     {
//         this->length=length;
//     }
// };

// int main()
// {
//     int len;
//     cout<<"Enter length:";
//     cin>>len;
//     example e(len);
//     cout<<e.length;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// template <class T>
// void sum(T a,T b)
// {
//     T c=a+b;
//     cout<<c<<endl;
// }

// int main()
// {
//     sum(1,2);
//     sum(1.1,2.2);
//     sum('A','L');
// }



// #include<iostream>
// using namespace std;

// template <class T, class Z>
// void display(T a,Z b)
// {
//     cout<<a<<"\t"<<b<<endl;
// }

// int main()
// {
//     display(45,35);
//     display("Lujana","MAlla");
// }



// #include<iostream>
// using namespace std;

// template <class t>
// class example
// {
//     public:
//     t a,b;

//     example(t a,t b)
//     {
//         this->a=a;
//         this->b=b;
//     }

//     void sum()
//     {
//         cout<<a+b<<endl;
//     }
// };

// int main()
// {
//     example<int> e(1,2);
//     example<char> e1('A','Z');
//     e.sum();
//     e1.sum();
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter two number:";
//     cin>>a>>b;
//     try
//     {
//         if(b==0)
//         {
//             throw(b);
//         }
//         else
//         {
//             cout<<float(a/b)<<endl;
//         }
//     }
//     catch(int x)
//     {
//         cout<<"Error at b="<<x<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// int x=11;

// int main()
// {
//     int x=10;
//     cout<<x<<endl;
//     cout<<::x<<endl;  
// }



// #include<iostream>
// using namespace std;

// void swap(string *s)
// {
//     *s="Shyam";
// }

// int main()
// {
//     string name;
//     name="Ram";
//     cout<<"NAme="<<name<<endl;
//     swap(&name);
//     cout<<"NAme="<<name;
// }

