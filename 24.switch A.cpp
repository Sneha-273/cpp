#include<iostream>
using namespace std;
float area_circle(float);
float area_triangle(float, float);

int main()
{
    int ch;
    cout<<"1.find area of circle "<<endl;
    cout<<"2.find area of triangle "<<endl;
    cout<<"\nEnter choice= ";
    cin>>ch;
    switch(ch)

    {
    case 1:
        float r;
        cout<<"\nenter redius= ";
        cin>>r;
        cout<<"\nArea of circle= "<<area_circle(r);
        break;


    case 2:
        float b,h;
        cout<<"\nEnter base= ";
        cin>>b;
        cout<<"\nEnter height= ";
        cin>>h;
        cout<<"\nArea of triangle= "<<area_triangle(b,h);
        break;

    default:
        cout<<"wrong choice";
        break;
    }
    return 0;
}
float area_circle(float r1)
{
    float x;
    x=3.14*r1*r1;
    return(x);
}
float area_triangle(float b1, float h1)
{
    float ans;
    ans=0.5*(b1*h1);
    return ans;

}