#include <iostream>

using namespace std;

class Clock{
    public: 
        int minute, hours, seconds;
    Clock(int minute, int hours){
        this->minute = minute;
        this->hours = hours;
    }
    void transfer(){
        try{
            seconds = (hours * 3600) + (minute * 60);
            if(hours == 0) throw(1);
            else if(minute == 0) throw(2);
            else cout << seconds;
        }
        catch(int error){
            if(error == 1) cout << minute * 60 << " No hours" << endl;
            else cout << hours * 3600 << " No minutes" << endl;
        }
    }
};

int main()
{
    int minute,hour;
    cin >> minute >> hour;
    Clock a (minute, hour);
    a.transfer();
    return 0;
}