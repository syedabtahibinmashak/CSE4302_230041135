#include<iostream>
using namespace std;

class BatchMeter
{
    private:
    int total=0, pulseSize=1;

    public:
        void setPulseSize(int s)
        {
            if(s<=0) cout <<"Invalid pulse; must be > 0" <<endl;
            else pulseSize=s;
        }
        int getTotal()
        {
            return total;
        }
        void addPulse()
        {
            total+=pulseSize;
        }
        void getClear()
        {
            total=0;            
        }
};