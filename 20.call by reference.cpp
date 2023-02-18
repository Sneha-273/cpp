#include<iostream>
using namespace std;
int mult(int &,int &);
int main()
{
    int a,b;
    cout << "Enter first number= ";
    cin>>a;
    cout << "Enter second number= ";
    cin>>b;
    cout<<"multiplication Answer= "<<mult(a,b)<<endl;
    return 0;
}
int mult(int &x,int &y)
{
    return(x*y);
}