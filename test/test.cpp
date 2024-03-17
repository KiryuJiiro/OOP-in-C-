// #include <iostream>
// int main() {
//     int num1, num2, sum;

//     // Input the first number
//     std::cout << "Enter the first number: ";
//     std::cin >> num1;

//     // Input the second number
//     std::cout << "Enter the second number: ";
//     std::cin >> num2;

//     // Add the numbers
//     sum = num1 + num2;

//     // Display the sum
//     std::cout << "The sum is: " << sum << std::endl;

//     return 0;
// }



// #include<iostream>
// using namespace std;

// class shape
// {
// public:
//     float area()
//     {
//         return 0;
//     }
// };

// class circle:public shape
// {
// public:
//     float area()
//     {
//         return 10;
//     }
// };

// class rectangle:public shape{
// public:
//     float area()
//     {
//         return 13;
//     }
// };

// int main()
// {
//     shape *c=new circle();
//     shape *r=new rectangle();
//     cout<<c->area()<<endl;
//     cout<<r->area();
//     delete c;
//     delete r;
// }

// #include<iostream>
// using namespace std;

// class animal
// {
// public:
//     virtual void noise()=0;
// };

// class dog:public animal
// {
// public:
//     void noise()
//     {

//     }
// };


// int main()
// {
//     dog d;
// }


// #include<iostream>
// using namespace std;

// class animal
// {
// public:
//     static int legs;
// };

// int animal::legs=4;

// int main()
// {
//     animal a1;
//     animal a2;
//     cout<<a1.legs<<endl;
//     cout<<a2.legs<<endl;
//     a2.legs=5;
//     cout<<a1.legs<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class animal
// {
// public:
//     static int legs;

//     static void sound()
//     {
//         cout<<"Woof Woof"<<endl;
//     }
// };

// int animal::legs=4;

// int main()
// {
//     animal a1;
//     animal::sound();
//     cout<<"Legs="<<a1.legs;
// }


// #include<iostream>
// using namespace std;

// class animal
// {
// public:
//     int legs;

//     animal(int legs)
//     {
//         legs=legs;
//     }
// };

// int main()
// {

// }

