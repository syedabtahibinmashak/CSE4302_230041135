#include<iostream>
#include<iomanip>
using namespace std;

class CoffeeMaker
{
    private:
        int currWater, currBean; 
        const int maxWater;
    public:
        CoffeeMaker(int n): maxWater(n)
        {
            currBean=currWater=0;
        }
        ~CoffeeMaker()
        {
            cout <<"Shutting down system. Cleaning internal pipes." <<endl;
        }
        void addResources(int w, int b)
        {
            if(w<=0) cout <<"Enter Valid Amount of Water" <<endl;
            else if(b<=0) cout <<"Enter Valid Amount of Beans" <<endl;
            else if(currWater+w>maxWater) cout <<"Water Overflow" <<endl;
            else
            {
                currBean+=b;
                currWater+=w;
            }
        }
        void brewCup(int strength)
        {
            if(currWater<150) cout <<"Refill needed for Water" <<endl;
            else if(currBean<strength*7) cout <<"Refill needed for Beans" <<endl;
            else
            {
                currWater-=150;
                currBean-=strength*7;
            }

        }
        void reportStatus() const
        {
            cout <<"Beans: " <<currBean <<" grams" <<endl;
            double tempWater=(currWater/maxWater)*100;
            cout <<"Water: " <<setprecision(2) <<tempWater <<" %" <<endl;
        }
};

int main()
{
    CoffeeMaker coffee(1500);
    coffee.addResources(500,100);
    coffee.brewCup(1);
    coffee.reportStatus();

    return 0;
}