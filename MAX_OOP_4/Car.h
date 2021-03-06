//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_4_CAR_H
#define MAX_OOP_4_CAR_H


#include <string>
#include <iostream>
using namespace std;


class Car
{
//конструктор без параметров
public:
Car(void); public:
//деструктор
virtual ~Car(void);
//констрктор с параметрами
Car(string,int,int);
//конструктор копирования
Car(const Car&);
//селекторы
string Get_mark(){return mark;}
int Get_cyl(){return cyl;}
int Get_power(){return power;}
//модификаторы
void Set_mark(string);
void Set_cyl(int);
void Set_power(int);
//перегрузка операции присваивания
Car& operator=(const Car&);
//глобальные операторы-функции ввода-вывода
friend istream& operator>>(istream&in,Car&c);
friend ostream& operator<<(ostream&out,const Car&c);
//атрибуты
protected:
string mark; int cyl;
int power;

};

#endif //MAX_OOP_4_CAR_H
