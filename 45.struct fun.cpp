#include<iostream>
using namespace std;
struct pateint
{
    int num;
    char n[20];
    float bill;
};
void display(pateint);

int main()
{
    struct pateint p;
    cout << "enter checking number= "<<endl;
    cin>>p.num;
    cout << "enter pateint name= "<<endl;
    cin>>p.n;
    cout << "enter total bill= "<<endl;
    cin>>p.bill;
    display(p);
    return 0;
}

void display(pateint p)
{
    cout<<"Details.."<<endl;
    cout<<p.num <<"."<<p.n <<":"<<p.bill;
}