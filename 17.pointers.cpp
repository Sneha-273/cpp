#include<iostream>
using namespace std;

int main()
{
    int a=27;
    int* p=&a;
    cout<<"a= "<<a<<endl<<"*p= "<<*p<<endl<<"p= "<<p<<endl;
    cout<<endl<<"----------------"<<endl;

    *p=100;
    cout<<"a= "<<a<<endl<<"*p= "<<*p<<endl<<"p= "<<p<<endl;
    cout<<endl<<"----------------"<<endl;
    
    a=2;
    cout<<"a= "<<a<<endl<<"*p= "<<*p<<endl<<"p= "<<p<<endl;
    cout<<endl<<"----------------"<<endl;
    return 0;
}