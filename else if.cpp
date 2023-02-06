#include<iostream>
using namespace std;

int main()
{
    float ph;
    cout<<".. PH scale.."<<endl;
    cout<<endl;
    cout<<"Enter your PH number=";
    cin>>ph;

    if(ph>=0 && ph<=3)
    {
        cout<<"It has acidic base";
    }
    else if(ph>=10)
    {
        cout<<"It has alkaline base";
    }
    else
        cout<<"It has neutral base";
    return 0;
}