#include<iostream>
using namespace std;
int sub(int,int);
int main()
{
    int n,m,a;
    cout << "no1=";
    cin>>n;
    cout << "no2=";
    cin>>m;
    a=sub(n,m);
    cout<<"Ans="<<a;
    return 0;
}
int sub(int a,int b)
{
    int a2;
    a2=a-b;
    return a2;
}

