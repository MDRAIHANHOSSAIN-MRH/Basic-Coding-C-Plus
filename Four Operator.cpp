#include<iostream>
using namespace std;
class Float
{
    float n;
public:
    void getData(float a)
    {
        n=a;
    }
    void dispResult(void)
    {
        cout<<n<<endl;
    }

    Float operator+ (Float& obj)
    {
        Float x;
        x.n = this->n + obj.n;
        return (x);
    }

    Float operator- (Float& obj)
    {
        Float x;
        x.n = this->n - obj.n;
        return (x);
    }

    Float operator* (Float& obj)
    {
        Float x;
        x.n = this->n * obj.n;
        return (x);
    }

    Float operator/ (Float& obj)
    {
        Float x;
        x.n = this->n / obj.n;
        return (x);
    }
};

int main()
{
    Float num1,num2,num3;
    num1.getData(78.9);
    num2.getData(45.2);
    num3=num1+num2;
    cout<<"SUM: ";
    num3.dispResult();
    num3=num1-num2;
    cout<<"SUBTRACTION: ";
    num3.dispResult();
    num3=num1*num2;
    cout<<"MULTIPLICATION: ";
    num3.dispResult();
    num3=num1/num2;
    cout<<"DIVISION: ";
    num3.dispResult();
    return 0;
}