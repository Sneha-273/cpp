#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n<=1)
        return 1;
    return fibo(n-2)+fibo(n-1);
}
int main()
{
    int num;
    cout<<"Enter the position= ";
    cin>>num;
    cout<<"The number at fibonacci position "<<num<<" is "<<fibo(num);
        return 0;
}