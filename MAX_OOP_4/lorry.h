//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_4_LORRY_H
#define MAX_OOP_4_LORRY_H

#include "Car.h"


//класс Lorry наследуется от класса Car class Lorry :
class Lorry: public Car
{
public:
Lorry(void);//конструктор без параметров
public:
~Lorry(void);//деструктор
Lorry(string,int,int,int);//конструктор с параметрами
Lorry(const Lorry & );//конструктор копирования
int Get_gruz(){return gruz;}//модификатор
void Set_Gruz(int);//селектор
Lorry& operator=(const Lorry&);//операция присваивания
friend istream& operator>>(istream&in,Lorry&l);//операция ввода
friend ostream& operator<<(ostream&out,const Lorry&l); //операция вывода
protected:
int gruz;//атрибут грузоподъемность
};

#endif //MAX_OOP_4_LORRY_H
