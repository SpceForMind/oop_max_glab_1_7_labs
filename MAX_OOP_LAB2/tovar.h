//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_LAB2_TOVAR_H
#define MAX_OOP_LAB2_TOVAR_H

#include <iostream>
#include <string>


using namespace std;


class Tovar
{
//атрибуты
    string naimenovanie; int kolichestvo; double stoimost;
public:
    Tovar();//конструктор без параметров
    Tovar(string, int, double);//конструктор с параметрами
    Tovar(const Tovar&);//конструктор копирования
    ~Tovar();//деструктор
    string get_naimenovanie();//селектор
    void set_naimenovanie(string);//модификатор
    int get_kolichestvo();//селектор
    void set_kolichestvo(int); //модификатор
    double get_stoimost();//селектор
    void set_stoimost(double); //модификатор
    void show();//просмотр атрибутов
};

#endif //MAX_OOP_LAB2_TOVAR_H
