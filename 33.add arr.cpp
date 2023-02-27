#include<iostream>
using namespace std;

int main()
{
    int arr[5]= {1,3,4,5,0};
    int sum=0,count=0,a;
    cout<<"the elements are= "<<endl;
    for(a=0; a<5; a++)
        cout<<arr[a]<<" "<<endl;
    for(a=0; a<5; a++)
    {
        sum+=arr[a];

    }
    cout<<"sum= "<<sum<<endl;
    return 0;
}