//
// Created by spaceformind on 04.05.21.
//



#include "customer.h"
#include <iostream>
#include <string>


using namespace std;


//конструктор без параметров
Customer::Customer()
{
    full_name=""; job=""; salary=0;
    cout<<"Constructor bez parametrov dlia objecta"<<this<<endl;
}


//конструктор с параметрами
Customer::Customer(string full_name_, string job_, double salary_)
{
    full_name=full_name_; job=job_; salary=salary_;
    cout<<"Constructor s parametrami dlia objecta"<<this<<endl;
}


//конструктор копирования
Customer::Customer(const Customer &t)
{
    if (this == &t)
        return;
    full_name=t.full_name; job=t.job; salary=t.salary;
    cout<<"Constructor copirovania dlia objecta"<<this<<endl;
}


//деструктор
Customer::~Customer()
{
    cout<<"Destructor dlia objecta"<<this<<endl;
}


//селекторы
string Customer::get_full_name()
{
    return full_name;
}


string Customer::get_job()
{
    return job;
}


double Customer::get_salary()
{
    return salary;
}


//модификаторы
void Customer::set_full_name(string full_name_)
{
    full_name=full_name_;
}


void Customer::set_job(string job_)
{
    job=job_;
}


void Customer::set_salary(double salary_)
{
    salary=salary_;
}


//метод для просмотра атрибутов
void Customer::show()
{
    cout<<"full_name :"<<full_name<<endl; cout<<"job :"<<job<<endl; cout<<"salary :"<<salary<<endl;
}
