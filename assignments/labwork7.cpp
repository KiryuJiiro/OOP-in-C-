// #include<iostream>
// using namespace std;

// int main()
// {
//     int a,b;
//     cout<<"Enter two numbers:";
//     cin>>a>>b;
//     try
//     {
//         if(b==0)
//         {
//             throw(b);
//         }
//         else
//         {
//             cout<<float(a/b);
//         }
//     }
//     catch(int x)
//     {
//         cout<<"Exception denominator="<<x;
//     }
// }


// #include<iostream>
// using namespace std;

// int main()
// {
//     string email;
//     cout<<"Enter email address:";
//     cin>>email;
//     int pos=email.find('@');
//     try
//     {
//         if(pos<0)
//         {
//             throw(email);
//         }
//         else
//         {
//             cout<<"valid email";
//         }
//     }
//     catch(string x)
//     {
//         cout<<"Invalid email";
//     }
// }


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


// #include <iostream>
// using namespace std;

// int main() {
//     string email, username;
//     cout << "Enter username: ";
//     cin >> username;
//     cout << "Enter email address: ";
//     cin >> email;
//     int len = email.length();
//     int pos = email.find('1') != string::npos || email.find('2') != string::npos ||
//                email.find('3') != string::npos || email.find('4') != string::npos ||
//                email.find('5') != string::npos || email.find('6') != string::npos ||
//                email.find('7') != string::npos || email.find('8') != string::npos ||
//                email.find('9') != string::npos || email.find('0') != string::npos;

//     try {
//         if (len >= 6 && pos) {
//             cout << "Valid email!!" << endl;
//         } else if (len < 6) {
//             throw len;
//         } else if (!pos) {
//             throw 'c';
//         }
//     } catch (int x) {
//         cout << "Insufficient password length" << endl;
//     } catch (char c) {
//         cout << "Password must contain at least one digit" << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <fstream>
// #include <stdexcept>
// using namespace std;

// int main() {
//     ifstream readfile("aB.txt");  // Replace "example.txt" with your file name
//     string line;

//     try {
//         if (!readfile) {
//             throw runtime_error("File could not be opened.");
//         } else {
//             while (readfile >> line) {
//                 cout << line << endl;
//             }
//         }
//     } catch (const runtime_error& e) {
//         cerr << "Error: " << e.what() << endl;
//     }

//     return 0;
// }
