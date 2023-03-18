#include<iostream>
using namespace std;
struct student
{
    int rno;
    float att;
};
int main()
{
    student s;
    s.rno=2;
    s.att=70;

    cout << "student roll no= "<<s.rno<<endl;
    cout << "student attendance= "<<s.att<<" %";
    return 0;
}