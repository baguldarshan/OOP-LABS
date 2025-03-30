#include <iostream>
using namespace std;

class WeatherReport {
private:
    int day;
    float hightemp;
    float lowtemp;
    float snowamount;
    float rainamount;

public: 

    WeatherReport() {
        day = 1;
        hightemp = 0;
        lowtemp = 0;
        snowamount = 0;
        rainamount = 0;
    }

    WeatherReport(int d, float high, float low, float snow, float rain) {
        day = d;
        hightemp = high;
        lowtemp = low;
        snowamount = snow;
        rainamount = rain;
    }

    void display() const {
        cout << "Weather Report for Day " << day << endl;
        cout << "High Temperature: " << hightemp << endl;
        cout << "Low Temperature: " << lowtemp << endl;
        cout << "Snowfall: " << snowamount <<  endl;
        cout << "Rainfall: " << rainamount << endl;
        cout << "--------------------------"<<endl;
    }
};

int main() {


    WeatherReport obj;                                
    obj.display();
    WeatherReport obj2(15, 25.5, 10.2, 8, 12);
    obj2.display();

    return 0;
}
