#include<iostream>
using namespace std;

class employee
{
public:
    int em_code;
    string name;
};

class fulltime:public employee
{
public:
    int daily_rate;
    int no_of_days;
    int salary;

    void setfulldata()
    {
        cout<<"Enter employee code:";
        cin>>em_code;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter daily rate:";
        cin>>daily_rate;
        cout<<"Enter number of days:";
        cin>>no_of_days;
        cout<<"Enter salary:";
        cin>>salary;
    }
    
    void displayfulldata()
    {
        cout<<"\n";
        cout<<"Employee code:"<<em_code<<endl;
        cout<<"Emoloyee name:"<<name<<endl;
        cout<<"Daily rate:"<<daily_rate<<endl;
        cout<<"Number of days:"<<no_of_days<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"\n";
    }
};

class parttime:public employee
{
public:
    int working_hour;
    int hourly_rate;
    int salary;

    void setpartdata()
    {
        cout<<"Enter employee code:";
        cin>>em_code;
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter working hour:";
        cin>>working_hour;
        cout<<"Enter hourly rate:";
        cin>>hourly_rate;
        cout<<"Enter salary:";
        cin>>salary;
    }
    
    void displaypartdata()
    {
        cout<<"\n";
        cout<<"Employee code:"<<em_code<<endl;
        cout<<"Emoloyee name:"<<name<<endl;
        cout<<"Working hour"<<working_hour<<endl;
        cout<<"Hourly rate::"<<hourly_rate<<endl;
        cout<<"Salary:"<<salary<<endl;
        cout<<"\n";
    }
};

int main()
{
    int fn,pn;
    cout<<"Enter number of full time employee:";
    cin>>fn;
    cout<<"Enter number of part time employee:";
    cin>>pn;
    fulltime f[fn];
    parttime p[pn];
    int choice;
    char c;
    cout<<"Is the data for full time employee:Y/N\nPress Y or N:";
    cin>>c;
    while(choice!=4)
    {
        cout<<"\n";
        cout<<"Select operation you want to do:\ni)1 to Enter data\nii)2 to Display Data\niii)3 to Search Employee\niv)4 for exit";
        cout<<"\n";
        cin>>choice;   
        switch(choice)
        {
            case 1:
            {
                if(c=='Y')
                {
                    for(int i=0;i<fn;i++)
                    {
                        f[i].setfulldata();                   
                    }
                }
                else
                {
                    for(int i=0;i<pn;i++)
                    {
                        p[i].setpartdata();                   
                    }
                }           
            }
            break;
            case 2:
            {
                if(c=='Y')
                {
                    for(int i=0;i<fn;i++)
                    {
                        f[i].displayfulldata();                   
                    }
                }
                else
                {
                    for(int i=0;i<pn;i++)
                    {
                        p[i].displaypartdata();                   
                    }
                }           
            }
            break;
            case 3:
            {
                int key;
                cout<<"Enter employee id you want to search:";
                cin>>key;
                if(c=='Y')
                {
                    for(int i=0;i<fn;i++)
                    {
                        if(key==f[i].em_code) 
                        {
                            f[i].displayfulldata();
                        }                  
                    }
                }
                else
                {
                    for(int i=0;i<pn;i++)
                    {
                        if(key==p[i].em_code) 
                        {
                            p[i].displaypartdata();
                        }                  
                    }
                }
            }
        }
    }
}