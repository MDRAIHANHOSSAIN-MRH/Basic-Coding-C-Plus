
#include<iostream>
using namespace std;

int main()
{
    int n,i,j,k;

    cout<<"Enter N: ";
    cin>>n;
    cout<<endl;

    int array[n];

    for(i=0; i<n; i++)
    {
        cin>>array[i];
    }

    for(i=0; i<n; i++)
    {
        int j=i;
        for(k=i+1; k<n; k++)
        {
            if(array[k]<array[j])
            {
                j=k;
            }
        }

        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }

    cout<<endl;
    for(i=0; i<n; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
}