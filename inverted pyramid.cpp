#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cout<<"Enter the rows=";
    cin>>n;
    for(a=n; a>=1;a--)
    {
        for(b=1; b<=a; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}