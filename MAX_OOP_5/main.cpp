#include "Object.h"
#include "Car.h"
#include "Lorry.h"
#include "Vector.h"

#include <string>
#include <iostream>

using namespace std;


int main()
{
    /*
     * Testing Vector
     */
    Vector v(5);//вектор из 5 элементов
    Car a;//объект класса Lorry
    cin>>a;
    Lorry b;// объект класса Lorry
    cin>>b;
    Object*p=&a;//ставим указатель на объект класса Car
    v.Add(p);//добавляем объект в вектор
    p=&b;//ставим указатель на объект класса Lorry
    v.Add(p); //добавляем объект в вектор
    cout<<v;//вывод вектораVector v(5);//вектор из 5 элементов
    cout << "yes";

    return 0;
}