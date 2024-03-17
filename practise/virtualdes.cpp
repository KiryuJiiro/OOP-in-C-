// #include<iostream>
// using namespace std;

// class origin
// {
// public:
//     virtual void null()
//     {

//     }

//     virtual ~origin()
//     {
//         cout<<"Base class destructor called"<<endl;
//     }
// };

// class dupe:public origin
// {
// public:
//     void null()
//     {

//     }

//     ~dupe()
//     {
//         cout<<"Derrived class destructor called"<<endl;
//     }
// };

// int main()
// {
//     origin *ptr = new dupe();
//     delete ptr;
//     return 0;
// }