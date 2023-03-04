#include<iostream>
using namespace std;

int main()
{
    int arr[2][2][2];
    int a,b,c;
    //3D array
    cout<<"Enter 8 numbers= ";

    for(a=0; a<2; a++)
    {
        for(b=0; b<2; b++)
        {
            for(c=0; c<2; c++)
            {
                cin>>arr[a][b][c];

            }
        }
    }
    for(a=0; a<2; a++)
    {
        for(b=0; b<2; b++)
        {
            for(c=0; c<2; c++)
            {
                cout<<"["<<a<<"]"<<"["<<b<<"]"<<"["<<c<<"]"<<arr[a][b][c]<<endl;

            }
        }
    }
    return 0;
}