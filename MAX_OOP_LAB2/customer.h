//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_LAB2_CUSTOMER_H
#define MAX_OOP_LAB2_CUSTOMER_H

#include <iostream>
#include <string>

using namespace std;


class Customer {
    //атрибуты
    string full_name;
    string job;
    double salary;
public:
    Customer();//конструктор без параметров
    Customer(string, string, double);//конструктор с параметрами
    Customer(const Customer&);//конструктор копирования
    ~Customer();//деструктор
    string get_full_name();//селектор
    void set_full_name(string);//модификатор
    string get_job();//селектор
    void set_job(string); //модификатор
    double get_salary();//селектор
    void set_salary(double); //модификатор
    void show();//просмотр атрибутов
};

#endif //MAX_OOP_LAB2_CUSTOMER_H
