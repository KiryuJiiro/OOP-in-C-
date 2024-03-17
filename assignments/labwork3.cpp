// #include<iostream>
// using namespace std;

// class marks
// {
// public:
//     int mark;
 
//     marks(int m)
//     {
//         mark=m;
//     }

//     bool operator>(marks m1)
//     {
//         return (mark>m1.mark)?true:false;
//     }
// };

// int main()
// {
//     int marks1,marks2;
//     cout<<"Enter two marks:";
//     cin>>marks1>>marks2;
//     marks m1(marks1),m2(marks2);
//     if(m1>m2)
//     {
//         cout<<marks1<<" is higher"<<endl;
//     }
//     else
//     {
//         cout<<marks2<<" is higher"<<endl;
//     }
// }


// #include<iostream>
// using namespace std;

// class marks
// {
// public:
//     int mark;
 
//     marks(int m)
//     {
//         mark=m;
//     }

//    friend bool operator>(marks m1,marks m2);
// };

// bool operator>(marks m1,marks m2)
// {
//     return (m1.mark>m2.mark)?true:false;       
// }

// int main()
// {
//     int marks1,marks2;
//     cout<<"Enter two marks:";
//     cin>>marks1>>marks2;
//     marks m1(marks1),m2(marks2);
//     if(m1>m2)
//     {
//         cout<<marks1<<" is higher"<<endl;
//     }
//     else
//     {
//         cout<<marks2<<" is higher"<<endl;
//     }
// }

// #include <iostream>
// using namespace std;

// class Distance
// {
// public:
//     int feet;
//     int inch;

//     Distance(int f, int i)
//     {
//         feet = f;
//         inch = i;
//     }

//     Distance operator+(const Distance &d1)
//     {
//         int feet1 = feet + d1.feet;
//         int inch1 = inch + d1.inch;
//         feet1 = feet1 + inch1 / 12;
//         inch1 = inch1 % 12;
//         return Distance(feet1, inch1);
//     }

//     void display()
//     {
//         cout << "Feet: " << feet << " Inch: " << inch << endl;
//     }
// };

// int main()
// {
//     Distance d1(5, 8);
//     Distance d2(3, 4);

//     Distance d3 = d1 + d2;

//     cout << "d1: ";
//     d1.display();

//     cout << "d2: ";
//     d2.display();

//     cout << "d1 + d2: ";
//     d3.display();

//     return 0;
// }


// #include<iostream>
// using namespace std;

// class imaginary
// {
// public:
//     int num_a;
//     int num_b;
//     string ans;

//     imaginary()
//     {

//     }

//     imaginary(int n_a,int n_b)
//     {
//         num_a=n_a;
//         num_b=n_b;
//     }

//     friend imaginary operator-(imaginary a,imaginary b);
// };

// imaginary operator-(imaginary a,imaginary b)
// {
//     imaginary i;
//     i.num_a=a.num_a-b.num_a;
//     i.num_b=a.num_b-b.num_b;
//     i.ans=to_string(i.num_a)+"+"+to_string(i.num_b)+"i";
//     return i;
// }

// int main()
// {
//     int n1_a,n1_b,n2_a,n2_b;
//     cout<<"Enter first a and b by comparing from a+bi:";
//     cin>>n1_a>>n1_b;
//     cout<<"Enter second a and b by comparing from a+bi:";
//     cin>>n2_a>>n2_b;
//     imaginary i1(n1_a,n1_b),i2(n2_a,n2_b);
//     imaginary i3=i1-i2;
//     cout<<"Difference of imaginary number:"<<i3.ans<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

class info
{
public:
    string name;
    string address;

    friend istream& operator>>(istream& i,info& in);
    friend ostream& operator<<(ostream& o,info& i);
};

istream& operator>>(istream& i,info& in)
{
    i>>in.name;
    i>>in.address;
    return i;
}

ostream& operator<<(ostream& o,info& i)
{
    o<<"Address:"<<i.address<<endl;
    o<<"Name:"<<i.name<<endl;
    return o;
}

int main()
{
    info a;
    cout<<"Enter name and address:"; 
    cin>>a;
    cout<<a;
    return 0;
}