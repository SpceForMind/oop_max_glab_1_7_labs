//
// Created by spaceformind on 04.05.21.
//

#include "triad.h"


//деструктор
Triad::~Triad(void)
{
}


//конструктор с параметрами
Triad::Triad(int first_, int second_, int third_)
{
    first=first_; second=second_; third=third_;
}


//конструктор копирования
Triad::Triad(const Triad& triad)
{
    first=triad.first; second=triad.second; third=triad.third;
}


//модификаторы
void Triad::Set_first(int first_)
{
    first=first_;
}


void Triad::Set_second(int second_)
{
    second=second_;
}


void Triad::Set_third(int third_)
{
    third=third_;
}


//перегрузка операции присваивания
Triad& Triad::operator=(const Triad&c)
{
    if(&c==this)return *this;
    first=c.first;
    second=c.second;
    third=c.third;
    return *this;
}


//глобальная функция для ввода
istream& operator>>(istream&in,Triad&c)
{
    cout<<"\nFirst:"; in>>c.first; cout<<"\nSecond:";in>>c.second; cout<<"\nThird:";in>>c.third;
    return in;
}


//глобальная функция для вывода
ostream& operator<<(ostream&out,const Triad&c)
{
    out<<"\nFirst : "<<c.first; out<<"\nSecond : "<<c.second; out<<"\nThird : "<<c.third; out<<"\n";
    return out;
}

