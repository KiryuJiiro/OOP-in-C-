// #include<iostream>
// using namespace std;

// class info{
// public:
//     string name;
//     string address;

//     info(string n,string a)
//     {
//         name=n;
//         address=a;
//     }

//     friend ostream& operator<<(ostream& o,info& i);
// };

// ostream& operator<<(ostream& o,info& i)
// {
//     o<<i.address<<endl;
//     o<<i.name<<endl;
//     return o;
// }

// int main()
// {
//     info Z("Zero","Neo");
//     cout<<Z;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class info
// {
//     public:
//     string name;
//     string address;

//     info(string n,string a)
//     {
//         name=n;
//         address=a;
//     }

//     friend ostream& operator<<(ostream& o,info& i);
// };

// ostream& operator<<(ostream& o,info& i)
// {
//     o<<"Your name is:"<<i.name<<endl;
//     o<<"Your address is:"<<i.address<<endl;
//     return o;
// }

// int main()
// {
//     info io("Thaxaina","Toilet");
//     cout<<io;
//     return 0;
// }