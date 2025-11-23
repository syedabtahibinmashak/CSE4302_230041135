#include<iostream>
using namespace std;

struct fraction
{
    int num, denom;
};

int main()
{
    fraction f1,f2,ans;
    char dummychar;

    cout <<"Enter first fraction: ";
    cin >>f1.num >>dummychar >>f1.denom;
    cout <<"Enter second fraction: ";
    cin >>f2.num >>dummychar >>f2.denom;

    ans.num=f1.num*f2.denom+f2.num*f1.denom;
    ans.denom=f1.denom*f2.denom;
    cout <<"Sum: " <<ans.num <<"/" <<ans.denom <<endl;

    return 0;
}