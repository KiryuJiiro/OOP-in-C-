#include<iostream>
using namespace std;

class temperature
{
public:
    double celcius;

    temperature(double c)
    {
        celcius=c;
    }
};

class room
{
public:
    float temp;

    room(temperature& t)
    {
        temp=t.celcius;
    }
};

int main()
{
    temperature t(4.399);
    room r=t;
    cout<<r.temp<<endl;
    return 0;
}