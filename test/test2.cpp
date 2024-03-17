#include<iostream>
using namespace std;

class player
{
    int pno;
    string pname;
    int pmatch;
    int *ngoals ;
public:
    player(int no,string name,int match)
    {
        int i;
        pno=no;
        pname=name;
        pmatch=match;
        ngoals=new int[pmatch];
        for(i=0;i<pmatch;i++)
        {
            cout<<"Enter number of goals for "<<i+1<<"st match:";
            cin>>ngoals[i];
        }
    }
    void displaystats()
    {
        cout<<"Player name:"<<pname<<endl;
        cout<<"Player no:"<<pno<<endl;
        cout<<"No of matches:"<<pmatch<<endl;
        int i;
        for(i=0;i<pmatch;i++)
            cout<<"Goals scored in "<<i+1<<"st match:"<<ngoals[i]<<endl;
    }
    ~player()
        {
            delete[] ngoals;
        }
};

int main()
{
    string n;
    int num,mat,i;
    cout<<"Enter name of player:";
    cin>>n;
    cout<<"Enter number of matches:";
    cin>>mat;
    int go[mat];
    cout<<"Enter player number:";
    cin>>num;
    player p1(num,n,mat);
    p1.displaystats();
    return 0;      
}
