#include<iostream>
using namespace std;
class B;
class A
{
    int num1;
public:
    void get_data(int a)
    {
        num1=a;
    }
    friend void MaxMin(A a, B b);
};

class B
{
    int num2;
public:
    void get_data(int b)
    {
        num2=b;
    }
    friend void MaxMin(A a, B b);
};

void MaxMin(A a, B b)
{
    if(a.num1>b.num2)
        cout<<"\nThe Maximum Number is: "<<a.num1<<endl;
    else
        cout<<"\nThe Maximum Number is: "<<b.num2<<endl;
}

int main()
{
    A a;
    B b;
    int x,y;
    cout<<"\nEnter a Number:";
    cin>>x;
    a.get_data(x);
    cout<<"\nEnter another Number:";
    cin>>y;
    b.get_data(y);
    MaxMin(a,b);

    return 0;
}