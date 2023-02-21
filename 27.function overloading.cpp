#include<iostream>
using namespace std;
//volume of sphere
float vol(float r)
{
    return(1.33*3.14*r*r*r);
}
//volume of cylinder
float vol(float r1, float h)
{
    return(3.14*r1*r1*h);
}
//volume of cube
int vol(int a)
{
    return(a*a*a);
}
int main()
{
    float r,r1,h,a;
    cout<<"enter the redius= ";
    cin>>r;
    cout<<"\nvolume of sphere= "<<vol(r);
    cout<<"\n---------------------";
    cout<<"\nenter the redius= ";
    cin>>r1;
    cout<<"\nenter the height= ";
    cin>>h;
    cout<<"\nvolume of cylinder= "<<vol(r1,h);
    cout<<"\n---------------------";
    cout<<"\nenter the length= ";
    cin>>a;
    cout<<"volume of cube= "<<vol(a);


    return 0;
}