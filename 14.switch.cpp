#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    char op;
    cout<<"For performing operation ->"<<endl;
    cout<<"Enter first number= ";
    cin>>num1;
    cout<<"Enter second number= ";
    cin>>num2;
    cout<<"Please.Enter operation symbol= ";
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<" "<<num1<<" +"<<" "<<num2<<"="<<num1+num2;
        break;
    case '-':
        cout<<" "<<num1<<" -"<<" "<<num2<<"="<<num1-num2;
        break;
    case '*':
        cout<<" "<<num1<<" *"<<" "<<num2<<"="<<num1*num2;
        break;
    case '/':
        cout<<" "<<num1<<" /"<<" "<<num2<<"="<<num1/num2;
        break;
    default:
        cout<<"Wrong choice!!";
    }
    return 0;
}