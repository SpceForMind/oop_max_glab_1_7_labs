//
// Created by spaceformind on 04.05.21.
//

#ifndef MAX_OOP_6_SET_H
#define MAX_OOP_6_SET_H


#include <iostream>

using namespace std;


class SetIterator
{
    friend class Set;//дружественный класс
public:
    SetIterator(){elem=0;}//конструктор без параметров
    SetIterator(const SetIterator&it){elem=it.elem;}//конструктор копирования
//перегруженные операции сравнения
    bool operator==(const SetIterator&it){return elem==it.elem;}
    bool operator!=(const SetIterator&it){return elem!=it.elem;};
//перегруженная операция инкремент
    void operator++(){ ++elem;};
    /*
     * Code in main.cpp has postfix usage of `++` operator -> we need to declare and implement it here
     */
    void operator++(int) { ++elem;}
//перегруженная операция декремент
    void operator--(){--elem;}
//перегруженная операция разыменования
    int& operator *() const{ return*elem;}

    int *get_elem() { return elem;}
private:
    int* elem;//указатель на элемент типа int
};


class Set
{
public:
//конструктор с параметрами: выделяет память под s элементов и заполняет их
//значением k
    Set(int s,int k=0);
//конструктор с параметрами
    Set(const Set&a);
//деструктор
    ~Set();
//оператор присваивания
    Set&operator=(const Set&a);
//операция доступа по индексу
    int&operator[](int index);
//операция, возвращающая длину вектора
    int operator()();
    friend bool operator!=(Set const &, Set const &);
    friend bool operator<(Set const &, const int);
    SetIterator operator+(int n);
//перегруженные операции ввода-вывода
    friend ostream& operator<<(ostream& out, const Set&a);
    friend istream& operator>>(istream& in, Set&a);

    /*
     * Methods for add
     * and remove
     * elements to Set
     */
    void add(int val);
    void remove(int val);

    SetIterator first(){return beg;}//возвращает указатель на первый элемент
    SetIterator last(){return end;}//возвращает указатель на элемент следующий за последним

private:
    int size;//размер множества
    int*data;//укзатель на динамический массив значений множество
    SetIterator beg;//указатель на первый элемент вектора
    SetIterator end;//указатель на элемент следующий за последним
};


#endif //MAX_OOP_6_SET_H
