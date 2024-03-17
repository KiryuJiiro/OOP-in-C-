// #include<iostream>
// using namespace std;

// class shape
// {
// public:
//     float area;

//     virtual void calcarea()
//     {
//         cout<<"Displaying area of different shapes"<<endl;
//     }
// };

// class circle:public shape{
// public:

//     float radius;
//     circle(float r)
//     {
//         radius=r;
//     }
// };

// class rectangle:public shape
// {
// public:
//     float length,breadth;

//     rectangle(float l,float b)
//     {
//         length=l;
//         breadth=b;
//     }

//     void calcarea()
//     {
//         area=length*breadth;
//         cout<<"Area of rectangle:"<<area;
//     }
// };

// int main()
// {
//     float rad,len,bre;
//     cout<<"Enter radius of circle:";
//     cin>>rad;
//     cout<<"Enter length and breadth of rectangle:";
//     cin>>len>>bre;
//     circle c(rad);
//     rectangle r(len,bre);
//     c.calcarea();
//     r.calcarea();
// }


// #include<iostream>
// using namespace std;

// class vehicle
// {
//     public:
//     virtual void start()=0;
// };

// class car:public vehicle
// {
//     public:
//     void start()
//     {
//         cout<<"Car is starting"<<endl;
//     }
// };

// class motorcycle:public vehicle
// {
//     public:
//     void start()
//     {
//         cout<<"Motorcycle is starting"<<endl;
//     }
// };

// int main()
// {
//     car c;
//     motorcycle m;
//     c.start();
//     m.start();
// }

// #include<iostream>
// using namespace std;

// class animal
// {
// public:
//     virtual void speak() = 0;
// };

// class dog : public animal
// {
// public:
//     void speak()
//     {
//         cout << "Bau bau" << endl;
//     }
// };

// class cat : public animal
// {
// public:
//     void speak()
//     {
//         cout << "Meow meow" << endl;
//     }
// };

// int main()
// {
//     animal* ptr[5];
//     animal* ptr1[5];

//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i] = new dog();
//         ptr1[i] = new cat();
//     }

//     for (int i = 0; i < 5; i++)
//     {
//         ptr[i]->speak();
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         ptr1[i]->speak();
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         delete ptr[i];
//         delete ptr1[i];
//     }

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class account
// {
// public:
//     int bal;

//     account() {}

//     account(int b)
//     {
//         bal = b;
//     }

//     virtual void deposit()
//     {}
//     virtual void withdrawal()
//     {}
//     virtual void interest_calculation()
//     {}
// };

// class savingsaccount : public account
// {
// public:

//     savingsaccount(int b) : account(b) {}

//     virtual void deposit()
//     {
//         int dep;
//         cout << "Enter deposit amount:";
//         cin >> dep;
//         bal = bal + dep;
//         cout << "New balance=" << bal << endl;
//     }

//     virtual void withdrawal()
//     {
//         int with;
//         cout << "Enter withdraw amount:";
//         cin >> with;
//         if (with > bal)
//         {
//             cout << "Insufficient balance" << endl;
//         }
//         else
//         {
//             bal -= with;
//             cout << "New balance=" << bal << endl;
//         }
//     }

//     virtual void interest_calculation()
//     {
//         int time, rate, interest;
//         cout << "Enter time and rate:" << endl;
//         cin >> time >> rate;
//         interest = (time * rate * bal) / 100;
//         cout << "Interest is=" << interest << endl;
//     }
// };

// class checkingaccount : public account
// {
// public:
//     checkingaccount(int b) : account(b) {}

//     void deposit()
//     {
//         int dep;
//         cout << "Enter deposit amount:";
//         cin >> dep;
//         bal = bal + dep;
//         cout << "New balance=" << bal << endl;
//     }

//     void withdrawal()
//     {
//         int with;
//         cout << "Enter withdraw amount:";
//         cin >> with;
//         if (with > bal)
//         {
//             cout << "Insufficient balance" << endl;
//         }
//         else
//         {
//             bal -= with;
//             cout << "New balance=" << bal << endl;
//         }
//     }

//      void interest_calculation()
//     {
//         int time, rate, interest;
//         cout << "Enter time and rate:" << endl;
//         cin >> time >> rate;
//         interest = (time * rate * bal) / 100;
//         cout << "Interest is=" << interest << endl;
//     }
// };

// int main()
// {
//     // Example usage
//     savingsaccount savings(1000);
//     checkingaccount checking(2000);

//     savings.deposit();
//     savings.withdrawal();
//     savings.interest_calculation();

//     checking.deposit();
//     checking.withdrawal();
//     checking.interest_calculation();

//     return 0;
// }

