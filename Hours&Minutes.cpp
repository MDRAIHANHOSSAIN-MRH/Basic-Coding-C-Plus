#include<iostream>
using namespace std;

class Time
{
    int hours;
    int minutes;

public:
    void getTime(void);
    void putTime(void);
    void addTime(Time T1, Time T2);
};

void Time::getTime(void)
{
    cout<<"Enter Time:"<<endl;
    cout<<"Hours: "; cin>>hours;
    cout<<"Minutes: "; cin>>minutes;
    cout<<endl<<endl;
}

void Time::putTime(void)
{
    cout<<endl;
    cout<<"Time after addition: "<<endl;
    cout<<"Hours:"<<hours<<"Minutes:"<<minutes<<":"<<endl;
}

void Time::addTime(Time T1,Time T2)
{
    minutes=T1.minutes+T2.minutes;
    hours=T1.hours+T2.hours+minutes/60;
    minutes %=60;
}

int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T2.getTime();

    T3.addTime(T1,T2);
    T3.putTime();

    return 0;
}