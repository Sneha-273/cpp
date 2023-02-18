#include<iostream>
using namespace std;
int swap(int *x,int*y);

int main()
{
    int a,b;
    cout<<"Enter no.1= ";
    cin>>a;
    cout<<"\nEnter no.2= ";
    cin>>b;
    cout<<"The no.1 is "<<a<<"and no.2 is "<<b<<endl;
    cout<<"-------After swapping--------";
    swap(a,b);
    cout<<"\nThe no.1 is "<<a<<"and no.2 is "<<b<<endl;

    return 0;
}
int swap(int *x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}