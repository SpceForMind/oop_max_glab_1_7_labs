//
// Created by spaceformind on 04.05.21.
//

#include "Money.h"
#include <iostream>

using namespace std;



//перегрузка глобальной функции-операции ввода
istream&operator>>(istream&in, Money&m)
{
    cout<<"Rub?"; in>>m.rub; cout<<"Penny?"; in>>m.penny;
    return in;
}


//перегрузка глобальной функции-операции вывода
ostream&operator<<(ostream&out, const Money&m) {

    return (out << m.rub << "," << m.penny);
}


Money Money::operator-(const Money &m) {
    if (m.penny <= penny) {
        penny -= m.penny;
        rub -= m.rub;
    }
    else {
        rub -= (1 + m.rub);
        penny = m.penny - penny;
    }

    return *this;
}