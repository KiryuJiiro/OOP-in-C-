// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter two numbers:";
//     cin>>a>>b;
//     char ope;
//     cout<<"Enter operation u want to perform:";
//     cin>>ope;
//     try{
//     switch(ope)
//     {
//         case '+':
//         {
//             cout<<"Sum is:"<<a+b<<endl;
//         }
//         break;
//         case '-':
//         {
//             cout<<"diff is:"<<a-b<<endl;
//         }
//         break;
//         case '*':
//         {
//             cout<<"Product is:"<<a*b<<endl;
//         }
//         break;
//         case '/':
//         {
//             if(b==0)
//                 throw(b);
//             else
//                 cout<<"Quotient is:"<<a/b<<endl;
//         }
//         break;
//         default:
//         {
//             throw ope;
//         }
//     }
//     }
//     catch(int& x)
//     {
//         cout<<"Error denominator cannot be 0,number 2="<<b;
//     }
//     catch(char& c)
//     {
//         cout<<"Error!!invalid operator";
//     }
// }