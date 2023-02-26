#include<iostream>
using namespace std;

int main()
{
   int arr[5]={1,2,3,4,5};
    int sum=0,count=0,r,a;
    cout<<"the elements are= "<<endl;
    for(a=0;a<5;a++)
    cout<<arr[a]<<" "<<endl;
    for(int r :arr)
    {
    sum+=r;
    ++count;
    }
    cout<<"sum= "<<sum<<endl;
    return 0;
}