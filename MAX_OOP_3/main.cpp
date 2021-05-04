#include "custom_time.h"
#include "Money.h"
#include <iostream>

using namespace std;


int main()
{
    Time a;//конструктор без параметров T
    Time b; //конструктор без параметров
    Time c; //конструктор без параметров

    cin>>a;//ввод переменной
    cin>>b;//ввод переменной

    ++a;//префиксная операция инкремент
    cout<<a<<endl;//вывод переменной
    c=(a++)+b;//сложение и постфиксная операция инкремент
    cout<<"a="<<a<<endl; //вывод переменной
    cout<<"b="<<b<<endl; //вывод переменной
    cout<<"c="<<c<<endl; //вывод переменной

    /*
     * Task
     */
    Money m1(1, 57);
    Money m2(2, 7);

    cout << m1 << "!=" << m2 << ":" << (m1 != m2) << endl;
    cout << m1 << "==" << m2 << ":" << (m1 == m2) << endl;
    cout << m2 << " - " << m1 << ":" << (m2 - m1);


    return 0;
}