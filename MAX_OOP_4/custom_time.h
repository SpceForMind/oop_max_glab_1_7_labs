//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_4_CUSTOM_TIME_H
#define MAX_OOP_4_CUSTOM_TIME_H

#include "triad.h"


class CustomTime: public Triad
{
public:
    CustomTime(void);//конструктор без параметров
public:
    ~CustomTime(void);//деструктор
    CustomTime(int,int,int);//конструктор с параметрами
    CustomTime(const CustomTime & );//конструктор копирования
    int Get_hours(){return hours;}//модификатор
    int Get_minutes(){return minutes;}//модификатор
    int Get_secs(){return secs;}//модификатор
    void Set_hours(int h);
    void Set_minutes(int m);
    void Set_secs(int s);
    CustomTime& operator=(const CustomTime&);//операция присваивания
    friend istream& operator>>(istream&in,CustomTime&l);//операция ввода
    friend ostream& operator<<(ostream&out,const CustomTime&l); //операция вывода

    /*
     * Cmp operators
     */
    friend const bool operator < (const CustomTime &v1, const CustomTime &v2);
    friend const bool operator <= (const CustomTime &v1, const CustomTime &v2);
    friend const bool operator > (const CustomTime &v1, const CustomTime &v2);
    friend const bool operator >= (const CustomTime &v1, const CustomTime &v2);
    friend const bool operator != (const CustomTime &v1, const CustomTime &v2);
    friend const bool operator == (const CustomTime &v1, const CustomTime &v2);


protected:
    int hours;
    int minutes;
    int secs;
};


#endif //MAX_OOP_4_CUSTOM_TIME_H
