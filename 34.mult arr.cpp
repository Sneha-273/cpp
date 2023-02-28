#include<iostream>
using namespace std;

int main()
{
    int arr[5],mul=1,a;
    int count;
    cout<<"multiplication in array"<<endl;
    cout<<"Enter 5 array elements= "<<endl;
    for(a=0; a<5; a++)
    {
        cin>>arr[a];
    }
    for(int &n :arr)
    {
        mul*=n;
        ++count;
    }
    cout<<"the multiplication of numbers= "<<mul;
    return 0;
}