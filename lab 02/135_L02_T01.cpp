#include<iostream>
using namespace std;

int main()
{
    int num1,num2,denom1,denom2;
    char dummychar;

    cout <<"Enter first fraction: ";
    cin >>num1 >>dummychar >>denom1;
    cout <<"Enter second fraction: ";
    cin >>num2 >>dummychar >>denom2;

    int ans_num=num1*denom2+num2*denom1;
    int ans_denom=denom1*denom2;
    cout <<"Sum: " <<ans_num <<"/" <<ans_denom <<endl;

    return 0;
}