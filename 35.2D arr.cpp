#include<iostream>
using namespace std;

int main()
{
    int arr[2][2]= {1,2,3,4};
    int a,b;
    cout<<"Two dimensional array"<<endl;
    for(a=0; a<2; a++)
    {
        for(b=0; b<2; b++)
        {
            cout<<"["<<a<<"]["<<b<<"]="<<arr[a][b]<<endl;
        }
    }
    return 0;
}