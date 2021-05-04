//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_4_TRIAD_H
#define MAX_OOP_4_TRIAD_H

#include <iostream>

using namespace std;


class Triad {
public:

    Triad() {first=0; second=0; third=0;}
    virtual ~Triad(void);
//констрктор с параметрами
    Triad(int,int,int);
//конструктор копирования
    Triad(const Triad&);
//селекторы
    int Get_first(){return first;}
    int Get_second(){return second;}
    int Get_third(){return third;}
//модификаторы
    void Set_first(int);
    void Set_second(int);
    void Set_third(int);
//перегрузка операции присваивания
    Triad& operator=(const Triad&);
//глобальные операторы-функции ввода-вывода
    friend istream& operator>>(istream&in,Triad&c);
    friend ostream& operator<<(ostream&out,const Triad&c);
//атрибуты
protected:
    int first;
    int second;
    int third;
};


#endif //MAX_OOP_4_TRIAD_H
