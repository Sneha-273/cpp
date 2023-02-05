#include<iostream>
using namespace std;

int main()
{
    int a,b,n;
    cout<<"Enter the rows=";
    cin>>n;
    for(a=1; a<=n; a++)
    {
        for(b=1; b<=n; b++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}