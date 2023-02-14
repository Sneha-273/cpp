#include<iostream>
using namespace std;

int main()
{
    int ogval=1000;
    int &rval=ogval;
    int i=1,i2=2;
    int &r=i,r2=i2;
    char a='Z',b;
    b=a;
    cout<<"original= "<<ogval<<endl;
    cout<<"reference= "<<rval<<endl;
    cout<<"I= "<<i<<endl<<"r= "<<r<<endl;
    cout<<"i2= "<<i2<<endl<<"r2= "<<r2<<endl;
    cout<<"a= "<<a<<endl<<"b= "<<b;
    return 0;
}