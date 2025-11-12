#include<iostream>
using namespace std;

int main()
{
    double h,d;
    cout <<"Enter maximum height: ";
    cin >> h; d=h;
    cout <<"Height after hour 1: " <<h <<"\n";
    d/=2; h+=d;
    cout <<"Height after hour 2: " <<h <<"\n";
    d/=2; h+=d;
    cout <<"Height after hour 3: " <<h <<"\n";

    return 0;
}




