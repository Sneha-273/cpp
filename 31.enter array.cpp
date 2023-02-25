#include<iostream>
using namespace std;

int main()
{
    int num[5],j,i;
    cout<<"Enter the 5 element= "<<endl;
    for(i=0; i<5; i++)
    {
        cin>>num[i];
    }
    cout<<"The elements are= "<<endl;
    for(j=0; j<5; j++)
    {
        cout<<num[j]<<" "<<endl;
    }

    return 0;
}