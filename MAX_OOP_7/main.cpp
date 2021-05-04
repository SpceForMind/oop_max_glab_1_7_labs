#include <iostream>
#include "Vector.h"
#include "Time.h"


int main() {
    //инициализация, ввод и вывод значений вектора
    Vector<int> A(5,0);
    cin>>A;
    cout<<A<<endl;
//инициализация и вывод значений вектора
    Vector <int>B(10,1);
    cout<<B<<endl;
//операция присваивания
    B=A;
    cout<<B<<endl;
//доступ по индексу
    cout <<A[2]<<endl;
//получение длины вектора
    cout<<"size="<<A()<<endl;
//операция сложения с константой
    B=A+10;
    cout<<B<<endl;

    /*
     * Time testing
     */
    Time t;
    cin>>t;
    cout<<t << endl;

    int k;
    cout<<"k?";
    cin>>k;
    Time p;
    Time time_k(k, 0); // необходимо т.к. мы реализовали перегрузку оператора `+` для `Time`, а не `int`
    p = t + time_k;
    cout<<p;

    /*
     * Vector testing
     */
    Time time;
    cin>>time;
    cout<<time;

    Vector<Time>A_time(5,t);
    cin>>A_time;
    cout<<A_time<<endl;

    Vector <Time>B_time(10,t);
    cout<<B_time<<endl;

    B_time = A_time;
    cout<<B_time<<endl; cout <<A_time[2]<<endl;
    cout<<"size="<<A_time()<<endl;

    B_time = A_time + time;
    cout<<B_time<<endl;


    return 0;
}