#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream writefile;
    writefile.open("Hello.txt");
    if(!writefile)
    {
        cout<<"file created";
    }
    writefile<<"Aalu is strong"<<endl;
    writefile.close();
}