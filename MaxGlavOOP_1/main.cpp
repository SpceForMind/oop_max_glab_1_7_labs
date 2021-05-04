#include <iostream>
#include "fraction.h"

using namespace std;


fraction make_fraction(double F, int S)

{

    fraction t;//создали временную переменную

    t.Init(F,S);//инициализировали поля переменной t с помощью параметров функции

    return t;//вернули значение переменной t

}


int main() {

//определение переменных А и В

    fraction A;
    fraction B;

    A.Init(3.0, 2);//инициализация переменной А B.Read();//ввод полей переменных В A.Show();//вывод значений полей переменной А B.Show();//вывод значений полей переменной В
    A.Read();
    B.Read();
    A.Show();
    B.Show();

//вывод значения степени, вычисленного с помощью функции Power() cout<<"A.Power("<<A.first<<","<<A.second<<")="<<A.Power()<<endl; cout<<"B.Power("<<B.first<<","<<B.second<<")="<<B.Power()<<endl;
    cout<<"A.Power("<<A.first<<","<<A.second<<")="<<A.Power()<<endl; cout<<"B.Power("<<B.first<<","<<B.second<<")="<<B.Power()<<endl;

//указатели

    fraction *X = new fraction;//выделение памяти под динамическую переменную

    X->Init(2.0, 5);//инициализация

    X->Show();//вывод значений полей

    X->Power();//вычисление степени

    cout << "X.Power(" << X->first << "," << X->second << ")=" << X->Power() << endl;

//массивы

    fraction mas[3];//определение массива

    for (int i = 0; i < 3; i++)

        mas[i].Read();//чтение значений полей

    for (int i = 0; i < 3; i++)

        mas[i].Show(); //вывод значений полей

    for (int i = 0; i < 3; i++) {

        mas[i].Power(); //вычисление степени cout<<"mas["<<i<<"].Power("<<mas[i].first<<","<<mas[i].second<<")="; cout<<mas[i].Power()<<endl;

        cout<<"mas["<<i<<"].Power("<<mas[i].first<<","<<mas[i].second<<")="; cout<<mas[i].Power()<<endl;
    }

//динамические масивы

    fraction *p_mas = new fraction[3];//выделение памяти

    for (int i = 0; i < 3; i++)

        p_mas[i].Read();//чтение значений полей

    for (int i = 0; i < 3; i++)

        p_mas[i].Show();//вывод значений полей

    for (int i = 0; i < 3; i++) {

        p_mas[i].Power();//вычисление степени cout<<"p_mas["<<i<<"].Power("<<p_mas[i].first<<","<<p_mas[i].second; cout<<")="<<p_mas[i].Power()<<endl;

        cout<<"p_mas["<<i<<"].Power("<<p_mas[i].first<<","<<p_mas[i].second; cout<<")="<<p_mas[i].Power()<<endl;
    }

//вызов функции make_fraction() double y; int z; cout<<"first?";cin>>y; cout<<"second?";cin>>z;
    /*
     * Note - I am changed naming of `y`, `z` to `first`, `second` (mote readable variables)
     */
    double first;
    int second;
    cout<<"first?";
    cin>>first;
    cout<<"second?";
    cin>>second;
    make_fraction(first, second);

//переменная F формируется с помощью функции make_fraction() fraction F=make_fraction(y,z);
    fraction F = make_fraction(first, second);

    F.Show();

    // Calculate distance
    double x1, y1;
    cout << "x1:";
    cin >> x1;
    cout << "y1:";
    cin >> y1;
    cout << "Distance (" << first << ", " << second << ") and (" << x1 << ", " << y1 << ")" << endl;
    cout << F.distance(x1, y1);


    return 0;
}

