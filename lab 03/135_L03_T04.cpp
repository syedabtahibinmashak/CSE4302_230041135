#include<iostream>
#include<string.h>
using namespace std;

class SupplyAlert 
{
    private:
        int currentStock=0,lowStockThreshold=5;
        char itemID[20];
    public:
        void setThreshold(int t)
        {
            if(t<=0) cout <<"Invalid threshold; must be > 0" <<endl;
            else lowStockThreshold=t;
        }
        void setItemID(const char id[])
        {
            strcpy(itemID,id);
        }
        void addStock(int n)
        {
            if(n<=0) cout <<"Invalid stock addition" <<endl;
            else currentStock+=n;
        }
        void consume(int n)
        {
            if(n<=0 || n>currentStock) cout <<"Invalid consumption" <<endl;
            else currentStock-=n;
        }
        bool isLow()
        {
            return (currentStock<=lowStockThreshold);
        }
        void profile()
        {
            cout <<"Item " <<itemID <<" :"
                <<" Stock " <<currentStock <<","
                <<" Threshold " <<lowStockThreshold <<",";
                if(isLow()) cout <<" LOW" <<endl;
                else cout<<" OK" <<endl;
        }
};