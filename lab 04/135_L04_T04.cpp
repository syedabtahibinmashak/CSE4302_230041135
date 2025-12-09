#include<iostream>
using namespace std;

class RaceCar
{
    private:
        const int maxSpeed;
        double currSpeed;
    public:
        RaceCar(int data): maxSpeed(data)
        {
            currSpeed=0;
        }
        ~RaceCar()
        {
            cout <<"Car returned to garage." <<endl;
        }
        void accelerate(int incSpeed)
        {
            if(currSpeed+incSpeed>maxSpeed) cout <<"Velocity limit exceeded. Please consult the laws of physics." <<endl;
            else currSpeed+=incSpeed;
        }
        bool isFasterThan(RaceCar nweCar) const
        {
            return currSpeed>nweCar.currSpeed;
        }
        void dashboard() const
        {
            cout <<"Current Speed: " <<currSpeed <<endl;
            cout <<"Maximum Speed: " <<maxSpeed <<endl;
        }
};

int main()
{
    RaceCar car1(100), car2(120);
    car1.accelerate(20);
    car2.accelerate(50);
    car1.dashboard();
    car2.dashboard();

    if(car1.isFasterThan(car2)) cout <<"Car 1 is Faster!" <<endl;
    else cout <<"Car 2 is Faster!" <<endl;

    return 0;
}