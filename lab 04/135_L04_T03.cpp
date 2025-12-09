#include<iostream>
using namespace std;

class FarlinkSatellite
{
    private:
        float altitude;
        static int totalSatellite;
    public:
        FarlinkSatellite()
        {
            altitude=430.2;
            totalSatellite++;
            cout <<"Satellite deployed. Orbit count: " <<totalSatellite <<endl;
        }
        ~FarlinkSatellite()
        {
            totalSatellite--;
            cout <<"Satellite de-orbited and burned up. Orbit count: " <<totalSatellite <<endl;
        }
        void adjustAltitude(float adjustment)
        {
            if(altitude+adjustment<230.4) cout <<"Invalid adjustment of altitude" <<endl; 
            else altitude+=adjustment;
        }
        static int getOrbitCount()
        {
            return totalSatellite;
        }
};

int FarlinkSatellite::totalSatellite = 0;
int main()
{
    FarlinkSatellite s1,s2,s3;
    s1.adjustAltitude(120.4);
    cout <<FarlinkSatellite::getOrbitCount() <<endl;
    return 0;
}