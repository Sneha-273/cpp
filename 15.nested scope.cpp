#include<iostream>
using namespace std;
char l='A';
int main()
{
    char u='@';
    cout<<l<<" "<<u<<endl;
    char l='a';
    cout<<l<<" "<<u<<endl;
    cout<<::l<<" "<<u<<endl;
    return 0;
}