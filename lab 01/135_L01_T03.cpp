#include<iostream>
using namespace std;

int main()
{
    double kmph;
    cout <<"Enter value in km/h: ";
    cin >> kmph;
    double ms=(kmph*8)/5;
    cout <<"Value in m/s: " << ms;

    return 0;
}


