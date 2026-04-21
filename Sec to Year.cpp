#include<iostream>
using namespace std;

class Time
{
    int Hours,Second,Min,Month,Day,Year;
public:
    void getData(void);
    void DisplayData(void);
    void totalHours(Time T1,Time T2);

};

void Time::getData(void)
{
    cout<<"Enter Data: "<<endl;
    cout<<"Year: ";    cin>>Year;
    cout<<"Month: ";   cin>>Month;
    cout<<"Day: ";     cin>>Day;
    cout<<"Hours: ";   cin>>Hours;
    cout<<"Minutes: "; cin>>Min;
    cout<<"Second: ";  cin>>Second;
    cout<<endl;
}

void Time :: DisplayData(void)
{
    cout<<"After Addition Total :"<<endl;
    cout<<"Year: "<<Year<<endl;
    cout<<"Month: "<<Month<<endl;
    cout<<"Day: "<<Day<<endl;
    cout<<"Hours: "<<Hours<<endl;
    cout<<"Minutes: "<<Min<<endl;
    cout<<"Second: "<<Second<<endl;
}

void Time::totalHours(Time T1,Time T2)
{
    Second=T1.Second+T2.Second;
    Min=T1.Min+T2.Min+(Second/60);
    Second=Second%60;
    Hours=T1.Hours+T2.Hours+(Min/60);
    Min=Min%60;
    Day=T1.Day+T2.Day+(Hours/24);
    Hours=Hours%24;
    Month=T1.Month+T2.Month+(Day/30);
    Day=Day%30;
    Year=T1.Year+T2.Year+(Month/12);
    Month=Month%12;
}

int main()
{
    Time T1,T2,T3;
    T1.getData();
    T2.getData();
    T3.totalHours(T1,T2);
    T3.DisplayData();

    return 0;
}