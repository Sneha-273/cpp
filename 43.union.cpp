#include<iostream>
using namespace std;
union book
{
    int   nbook;
    int   A4;
    int  guide;
};
int main()
{
    union book b;
    b.nbook=30;
    b.A4=50;
    b.guide=100;
    cout<<"A4= "<<b.A4<<endl;
    cout<<"guide= "<<b.guide<<endl;
    cout<<"notebook= "<<b.nbook<<endl;
    return 0;
}