#include<iostream>
using namespace std;
float circle(float);
int main()
{
    float r1;
    cout <<"Enter redius=";
    cin>>r1;
    cout<<"Area of circle= "<<circle(r1);
    return 0;
}
float circle(float r)
{
    float ans;
    ans=3.14*r*r;
    return ans;
}
    