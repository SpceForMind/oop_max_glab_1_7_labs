#include <iostream>
#include "Car.h"
#include "lorry.h"
#include "custom_time.h"

using namespace std;


//функция принимает объект базового класса как параметр
void f1(Car&c)
{
    c.Set_mark("Opel"); cout<<c;
}


//функция возвращает объект базового класса как результат
Car f2()
{
    Lorry l("Kia",1,2,3); return l;
}


int main()
{
    Car a; cin>>a; cout<<a;
    Car b("Ford",4,115); cout<<b;
    a=b; cout<<a;

    Lorry c;//создать объект
    cin>>c;//ввести значения атрибутов
    cout<<c;//вывести значения атрибутов

    f1(c);//передаем объект класса Lorry
    a=f2();//создаем в функции объект класса Lorry
    cout<<a;

    /*
     * Task
     */
    Triad t1(1, 1, 2);
    cout << t1 << endl;
    t1.Set_first(2);
    cout << t1 << endl;

    CustomTime ct1(2, 3, 5); // 2h 3m 5s
    CustomTime ct2(2, 3, 4); // 2h 3m 4s

    cout << ct1 << " >= " << ct2 << ":" << (ct1 >= ct2);

    ct2.Set_secs(6);

    cout << ct1 << " >= " << ct2 << ":" << (ct1 >= ct2);

    ct2.Set_secs(5);

    cout << ct1 << " == " << ct2 << ":" << (ct1 == ct2);

}