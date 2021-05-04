#include "tovar.h"
#include "customer.h"
#include <iostream>
#include <string>

using namespace std;


//функция для возврата объекта как результата
Tovar make_tovar()
{
    string s; int i; double d;
    cout<<"Vvedite naimenovanie: "; cin>>s;
    cout<<"Vvedite kolichestvo: ";
    cin>>i;
    cout<<"Vvedite stoimost: "; cin>>d;
    Tovar t(s,i,d); return t;
}


//функция для передачи объекта как параметра
void print_tovar(Tovar t)
{
    t.show();
}


//функция для возврата объекта как результата Customer
Customer make_customer()
{
    string full_name; string job; double salary;
    cout<<"Vvedite full_name: "; cin>>full_name;
    cout<<"Vvedite job: ";
    cin>>job;
    cout<<"Vvedite salary: "; cin>>salary;
    Customer c(full_name,job,salary);
    c.show();
    return c;
}


//функция для передачи объекта как параметра Customer
void print_customer(Customer c)
{
    c.show();
}



int main()
{
//конструктор без параметров
    Tovar t1; t1.show();

//коструктор с параметрами
    Tovar t2("Computer", 1,15000);
    t2.show();

//конструктор копирования
    Tovar t3 = t2;
    t3.set_naimenovanie("Telephon");
    t3.set_kolichestvo(2);
    t3.set_stoimost(5000.0);

//конструктор копирования
    print_tovar(t3);
//конструктор копирования
    t1 = make_tovar();
    t1.show();


    // Task
    Customer c1; c1.show();

//коструктор с параметрами
    Customer c2("Maximka Glavackyx", "Python-Drakosha", 150000);
    c2.show();

//конструктор копирования
    Customer c3 = c2;
    c3.set_full_name("Vasilchuk Namba One");
    c3.set_job("Poor Man Shield");
    c3.set_salary(10000);

//конструктор копирования
    print_customer(c3);

//конструктор копирования
    c1 = make_customer();
    c1.show();


    return 0;
}