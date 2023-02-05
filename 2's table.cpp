#include<iostream>
using namespace std;

int main()
{
    int a=2,n=1;
    while(a!=11 && n!=11)
    {
        cout<<a<<" "<<"*"<<n<<" "<<"="<< a*n <<endl;
        n=n+1;
    }
    return 0;
}