#include<iostream>
using namespace std;

float Area(float length,float width)
{
    return length*width;
}

float Area(float r, float height,float PI)
{
    return (2*PI*r*height)+(2*PI*r*r);
}

float Area(float edge)
{
    return 6*edge*edge;
}

int main()
{
    int x;
    float length,height,width,r,edge,PI;

    while(1)
    {
        cout<<"Area for Rectangle & Cylinder & Cube"<<endl;
        cout<<"1. Rectangle."<<endl;
        cout<<"2. Cylinder."<<endl;
        cout<<"3. Cube."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"Enter your Option:(1/2/3/4): "<<endl;
        cin>>x;
    switch(x)
    {
        case 1:
        cout<<"Enter Length And Width for Rectangle Area: ";
        cin>>length>>width;
        cout<<"Rectangle = "<<Area(length,width);
        cout<<endl<<endl;
        break;

        case 2:
        cout<<"Enter Radius and Height and PI for Cylinder Area: ";
        cin>>r>>height>>PI;
        cout<<"Cylinder = "<<Area(r,height,PI);
        cout<<endl<<endl;
        break;


        case 3:
        cout<<"Enter Edge for Cube Area: ";
        cin>>edge;
        cout<<"Cube = "<<Area(edge);
        cout<<endl<<endl;
        break;


        default:
            cout<<endl<<endl;
            cout<<"Exit.";
            cout<<endl<<endl;
        exit(1);

    }
    }

}