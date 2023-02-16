#include<iostream>
using namespace std;
int add(int n1,int n2 )
{
    return(n1+n2);
}
int main()
{
    int n,m;
    int add(int,int);
    cout<<"Enter the first number= ";
    cin>>n;
    cout<<"Enter the second number= ";
    cin>>m;
    int sum;
    sum=add(n,m);
    cout<<"sum= "<<sum<<endl;



}