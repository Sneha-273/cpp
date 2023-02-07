#include<iostream>
using namespace std;

int main()
{
    int pval=0,val=0,cnt=1;
    cout<<"Enter numbers="<<endl;
    if(cin>>pval)
    {
        while(cin>>val)
        {
            if(val==pval)
                ++cnt;
            else
            {
                cout<<pval<<" occurs "<<cnt<<" times"<<endl;
                pval=val;
                cnt=1;
            }

        }
        cout<<pval<<" occurs "<<cnt<<" times"<<endl;
    }


    return 0;
}