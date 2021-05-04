//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_3_MONEY_H
#define MAX_OOP_3_MONEY_H



#include <iostream>
using namespace std;


class Money
{
    long int rub;
    int penny;
public:
    Money(){rub=0;penny=0;};
    Money(int rub_, int penny_){rub=rub_;penny=penny_;}
    Money(const Money&t){rub=t.rub;penny=t.penny;}
    ~Money(){};
    int get_rub(){return rub;}
    int get_penny(){return penny;}
    void set_rub(int rub_){rub=rub_;}
    void set_sec(int penny_){penny=penny_;}

//глобальные функции ввода-вывода
    friend istream& operator>>(istream&in, Money&t); friend ostream& operator<<(ostream&out, const Money&t);


    /*
     * Sub operator
     */
    Money operator-(const Money&);

    /*
     * Compare operators
     */
    const bool operator != (const Money &m)
    {
        return !((rub == m.rub) && (penny == m.penny));
    }


    const bool operator == (const Money &m)
    {
        return ((rub == m.rub) && (penny == m.penny));
    }
};


#endif //MAX_OOP_3_MONEY_H
