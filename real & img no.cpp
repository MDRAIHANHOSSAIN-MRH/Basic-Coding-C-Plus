#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    complex()
    {

    }
    complex(int real1,int img1)
    {
        real=real1;
        img=img1;
    }
   void print()
   {
       cout<<real<<" + "<<img<<"i";
   }
   friend complex sum(complex,complex);
};
complex sum(complex obj1,complex obj2)
{
    complex obj3;
    obj3.real=obj1.real+obj2.real;
    obj3.img=obj1.img+obj2.img;
    return obj3;

}
int main()
{
    int a,b;
    cout<<"Enter the 1st complex  value:";
    cin>>a>>b;
    complex c2(a,b);
    cout<<"Enter the 2st complex  value:";
    cin>>a>>b;
    complex c3(a,b);
    cout<<"Total  complex  value = ";
    complex c4=sum(c2,c3);
    c4.print();
    return 0;

}