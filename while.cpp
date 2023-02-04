#include<iostream>
using namespace std;

int main()
{
    int num,count=1,sum=0;
    cout<<"Enter the number=";
    cin>>num;
    while(count<=num)
    {
        sum +=count;
        count=count+1;
    }
    cout<<"the sum of number: "<<sum;
    return 0;
}