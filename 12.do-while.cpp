#include<iostream>
using namespace std;

int main()
{
    int num=0,sum=0;

    do
    {
        cout<<"enter number= ";
        cin>>num;
        sum+=num;

    }
    while(num>=0);
    cout<<"sum= "<<sum;
    return 0;
}