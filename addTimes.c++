#include <iostream>
using namespace std;

class Time{
    int hours, minutes, seconds;
    public:
    Time(int h=0,int m=0,int s=0):hours(h),minutes(m),seconds(s){}
    void input(){
        cout << "Enter time (hours minuites seconds): ";
        cin >> hours >> minutes >> seconds;
    };

    Time operator +(Time &obj){
        Time result;
        result.seconds = seconds + obj.seconds;
        result.minutes = minutes + obj.minutes + result.seconds / 60;
        result.hours = hours + obj.hours + result.minutes / 60;
        result.seconds %= 60;
        result.minutes %= 60;

        return result;
    };

    void show(){
        cout << "The required time is " << hours << " :" << minutes << ":" << seconds << " " << endl;
    };

};

int main(){
    Time obj1, obj2, obj3;
    obj1.input();
    obj2.input();
    obj3= obj1 + obj2;
    obj3.show();
    return 0;
};

//Enter time (hours minuites seconds):1 35 55
//Enter time (hours minuites seconds):2 20 13
//The required time is 3:56:8
