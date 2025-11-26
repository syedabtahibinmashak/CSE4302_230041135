#include<iostream>
using namespace std;

class RatioQuota
{
    private:
        int num,denom;
    public:
        void setRatio(int p, int q)
        {
            if(q==0) cout <<"Denominator cannot be zero" <<endl;
            else 
            {
                num=p; 
                denom=q;
            }
        }
        double asDecimal()
        {
            double temp= static_cast<double>(num);
            return temp/denom;
        }
        void reciprocal()
        {
            if(num==0) cout <<"Reciprocal failed: zero cannot be a denominator" <<endl;
            else 
            {
                int t=num;
                num=denom;
                denom=t;
            }
        }
        void show()
        {
            cout <<"Ratio: " <<num <<"/" <<denom <<endl;
        }
};