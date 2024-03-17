// #include<iostream>
// using namespace std;

// int main()
// {
//     string name;
//     int age;
//     cout<<"Enter your name:";
//     cin>>name;
//     cout<<"Enter age:";
//     cin>>age;
//     cout<<"My name is "<<name<<" and i am beautiful"<<endl;
//     cout<<"My age is "<<age<<" and i am cool"<<endl;
//     return 0;
// }



// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter a number:";
//     cin>>a;
//     cout<<"Enter another number:";
//     cin>>b;
//     cout<<a+b;
//     return 0;
// }


// //using class and costructor
// #include<iostream>
// using namespace std;

// class laptop
// {
// public:
//     double cost;
//     string brand;

//     laptop(double c,string b)
//     {
//         cost=c;
//         brand=b;
//     }
// };

// int main()
// {
//     double cost;
//     string brand;
//     cout<<"Enter cost of laptop and its brand:"<<endl;
//     cin>>cost>>brand;
//     laptop l1(cost,brand);
//     cout<<"Cost is "<<l1.cost<<endl;
//     cout<<"Brand is "<<l1.brand; 
//     return 0;
// }
 


 
//accessing global variable using ::
// #include<iostream>
// using namespace std;

// int a=10;//global variable declaration

// int main()
// {
//     int a=20;//variable with same name as global variable
//     {
//         int a=30;//variable with same name again
//         cout<<"within this scope "<<a<<endl;//prints value of a within this scope
//         cout<<"acesssing global variable "<<::a<<endl;//prints value of a within this scope
//     }    
//     cout<<"within main function scope "<<a<<endl;//prints value of a of main scope
//     cout<<"accessing global variable "<<::a;//prints global value of a
// }