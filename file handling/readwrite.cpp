#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream writefile;
    ifstream readfile;

    writefile.open("aaluisgoodgirl.txt");
    writefile<<"Aalu is a good girl";
    writefile.close();
    readfile.open("aaluisgoodgirl.txt");
    string line;
    while(getline(readfile,line))
    {
        cout<<line<<endl;
    }
    readfile.close();
    return 0;
}

