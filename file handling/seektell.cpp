#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream addfile;
    addfile.open("aaluisgoodgirl.txt");
    addfile.seekp(9);
    addfile<<"very ";
    addfile.close();
    cout<<"Contents added";
    return 0;
}