// #include<iostream>
// using namespace std;

// class student
// {
// public:
//     int x;

// int operator++()
// {
//     int incr;
//     incr=++x;
//     return incr;
// }
// };

// int main()
// {
//     student s;
//     s.x=5;
//     ++s;
//     cout<<s.x;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class student
// {
// public:
//     int x;
// friend student operator++(student s);
// };

// student operator++(student s)
// {
//  student s1;
//  s1.x = ++s.x;
//  return s1;
// }

// int main()
// {
//     student s;
//     s.x=5;
//     student s2 = ++s;
//     cout<<s2.x;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class compare
// {
// public:
//     int data;
//     compare(int d)
//     {
//         data=d;
//     }

//     bool operator>(compare x)
//     {
//         if(data>x.data)
//         {
//             return true;
//         }
//         else 
//         {
//             return false;
//         }
//     }
// };

// int main()
// {
//     compare s(1);
//     compare c1(3);
//     if(c1>s)
//         cout<<"first is greater"<<endl;
//     else 
//         cout<<"Second is greater"<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class data
// {
// public:
//     string address;
//     string name;

//     friend istream& operator>>(istream& i,data& d); 
// };

// istream& operator>>(istream& i,data& d)
// {
//     i>>d.address;
//     i>>d.name;
//     return i;
// }

// int main()
// {
//     data d;
//     cin>>d;
//     cout<<d.address<<endl;
//     cout<<d.name<<endl;
//     return 0;
// }