#ifndef Time_H
#define Time_H

class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    void setHour(int);
    void setMinute(int);
    void setSecond(int);
    bool validTime();
    void print();
};

#endif