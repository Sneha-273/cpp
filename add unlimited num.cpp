#include<iostream>
using namespace std;

int main()
{
    int sum=0,num;
    cout<<"--- addition of unlimited number ---"<<endl;
    cout<<endl;
    cout<<"Enter number= ";
    while(cin>>num)
        sum=sum+num;
    cout<<"sum="<<sum;
    return 0;
}