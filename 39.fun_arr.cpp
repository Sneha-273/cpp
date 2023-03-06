#include<iostream>
using namespace std;
void fun(int m[5])
{
    int a;
    for(a=0; a<5; a++)
    {
        cout<<"student height "<<a+1<<"= "<<m[a]<<"cm"<<endl;
    }
}
int main()
{
    int ht[5]= {150,155,157,159,160};
    cout<<"students height :"<<endl;
    fun(ht);
    return 0;
}