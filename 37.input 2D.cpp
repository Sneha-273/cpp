#include<iostream>
using namespace std;

int main()
{
    int arr[3][3];
    int a,b;
    cout<<"Enter 10 numbers= "<<endl;
    for(a=0; a<3; ++a)
    {
        for(b=0; b<3; ++b)
        {
            cin>>arr[a][b];
        }
    }
    cout<<"The 2D array= "<<endl;
    for(a=0; a<3; a++)
    {
        for(b=0; b<3; b++)
        {
            cout<<"["<<a<<"]"<<"["<<b<<"]"<<arr[a][b]<<endl;
        }
    }
    return 0;
}