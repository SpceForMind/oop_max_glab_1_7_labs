//
// Created by spaceformind on 04.05.21.
//

#include "custom_time.h"


//конструктор без параметров
CustomTime::CustomTime(void):Triad()
{
    hours=first;
    minutes=second;
    secs=third;
}


//дестрктор
CustomTime::~CustomTime(void)
{
}


//конструктор с параметрами
CustomTime::CustomTime(int hours_, int minutes_, int seconds_):Triad(hours_,minutes_,seconds_)
{
    hours=first;
    minutes=second;
    secs=third;
}


//конструктор копирования
CustomTime::CustomTime(const CustomTime &ct)
{
    hours = ct.hours;
    minutes = ct.minutes;
    secs = ct.secs;
}


//модификатор
void CustomTime::Set_hours(int h)
{
    hours=h;
}

//модификатор
void CustomTime::Set_minutes(int m)
{
    minutes=m;
}

//модификатор
void CustomTime::Set_secs(int s)
{
    secs=s;
}


//оперция присваивания
CustomTime& CustomTime::operator=(const CustomTime&l)
{
    if(&l==this)return *this;
    hours=l.hours;
    minutes=l.minutes;
    secs=l.secs;

    return *this;
}


//операция ввода
istream& operator>>(istream&in,CustomTime&l)
{
    cout<<"\nHours:"; in>>l.hours; cout<<"\nMins:";in>>l.minutes; cout<<"\nSecs:";in>>l.secs;
    return in;
}


//операция вывода
ostream& operator<<(ostream&out,const CustomTime&l)
{
    out<<"\nHours : "<<l.hours; out<<"\nMins : "<<l.minutes; out<<"\nSecs : "<<l.secs; out<<"\n";
    return out;
}


/*
 * Compare operators implementation
 */
const bool operator < (const CustomTime &v1, const CustomTime &v2) {
    if (v1.hours < v2.hours)
        return true;
    else if (v1.hours == v2.hours) {
        if (v1.minutes < v2.minutes)
            return true;
        else if (v1.minutes == v2.minutes) {
            if (v1.secs < v2.secs)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    else
        return false;
}

const bool operator == (const CustomTime &v1, const CustomTime &v2) {
    return (v1.hours == v2.hours) && (v1.minutes == v2.minutes) && (v1.secs == v2.secs);
}

const bool operator <= (const CustomTime &v1, const CustomTime &v2) {
    return (v1 == v2) || (v1 < v2);
}

const bool operator > (const CustomTime &v1, const CustomTime &v2) {
    return !(v1 < v2);
}

const bool operator >= (const CustomTime &v1, const CustomTime &v2){
    return !(v1 < v2);
}

const bool operator != (const CustomTime &v1, const CustomTime &v2){
    return !(v1 == v2);
}
