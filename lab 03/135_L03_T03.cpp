#include<iostream>
#include<iomanip>
using namespace std;

class EventTime
{
    private:
        long hour, minute, second;
    public:
        int getHour()
        {
            return hour;
        } 
        int getMinute()
        {
            return minute;
        } 
        int getSecond()
        {
            return second;
        }
        void setTime(long h, long m, long s)
        {
            if(h<0||m<0||s<0) cout <<"Invalid Input: Negative Value" <<endl;
            else
            {
                long add_min=s/60;
                second=s%60;
                m+=add_min;

                long add_hour=m/60;
                minute=m%60;
                h+=add_hour;

                hour=h%24;
            }

        }
        void addDuration(long h, long m, long s)
        {
            if(h<0||m<0||s<0) cout <<"Invalid Input: Negative Value" <<endl;
            else setTime(hour+h, minute+m, second+s);
        }
        void printTime()
        {
            cout <<setw(2) <<setfill('0') <<hour <<":"
                <<setw(2) <<setfill('0') <<minute <<":"
                <<setw(2) <<setfill('0') <<second <<endl;
        }
};