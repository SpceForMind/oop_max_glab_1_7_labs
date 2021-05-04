//
// Created by spaceformind on 04.05.21.
//

#include "Set.h"

//конструктор с параметрами
Set::Set(int s,int k)
{
    size=s;
    data=new int[size];

    /*
     * We fill Set with 1 2 3 ... by default
     * Cause Set is structure where numbers cannot duplicate
     */
    for(int i=0;i<size;i++) {
        data[i] = k;
        k += 1;
    }

    beg.elem=&data[0];
    end.elem=&data[size];
}


//конструктор копирования
Set::Set(const Set&a)
{
    size=a.size; data=new int[size];
    for(int i=0;i<size;i++)
        data[i]=a.data[i];
    beg=a.beg; end=a.end;
}
//деструктор
Set::~Set()
{
    delete[]data; data=0;
}
//операция присваивания
Set&Set::operator=(const Set&a)
{
    if(this==&a)
        return *this; size=a.size;
    if (data!=0)
        delete[]data;
    data=new int[size];
    for(int i=0;i<size;i++)
        data[i]=a.data[i];
    beg=a.beg; end=a.end;
    return *this;
}
//операция доступа по индексу
int&Set::operator[](int index)
{
    if (index<size)
        return data[index];
    else cout<<"\nError! Index>size";
}

//операция для получения длины вектора
int Set::operator ()()
{
    return size;
}
//операции для ввода-выода
ostream&operator<<(ostream&out,const Set&a)
{
    for(int i=0;i<a.size;++i)
        out<<a.data[i]<<" ";
    return out;
}

istream&operator>>(istream&in,Set&a)
{
    for(int i=0;i<a.size;++i)
        in>>a.data[i];
    return in;
}


void Set::add(int val){
    /*
     * Check Loop
     */
    for (int i = 0; i < size; ++i) {
        if (data[i] == val) {
            cout << "Cannot add " << val << " to set cause it already in" << endl;
            return;
        }
    }

    int * new_data = new int[size + 1];
    for (int i = 0; i < size; ++i)
        new_data[i] = data[i];

    new_data[size] = val;
    size += 1;
    delete[] data;
    data = new_data;
    beg.elem = &data[0];
    end.elem = &data[size];
}


void Set::remove(int val) {
    for (int i = 0; i < size; ++i) {
        if (data[i] == val) {
            int * new_data = new int[size - 1];
            for (int i = 0, j = 0; i < size && j < size - 1; ++i, ++j) {
                if (data[i] != val)
                    new_data[j] = data[i];
                else
                    /*
                     * We stay on index and may `i` go to next cell of data
                     * So we pass value what we want to remove
                     */
                    j -= 1;
            }

            delete[] data;
            data = new_data;
            size -= 1;
            beg.elem = &data[0];
            end.elem = &data[size];
        }
    }
}


bool operator!=(Set const &s1, Set const &s2){
    if (s1.size != s2.size)
        return true;

    for (int i = 0; i < s1.size; ++i){
        if (s1.data[i] != s2.data[i])
            return true;
    }

    return false;
}


SetIterator Set::operator+(const int n){
    SetIterator item;
    int count_steps = n;

    for (SetIterator iter = beg; iter != end; iter++){
        if (count_steps == 0){
            item = iter;
            break;
        }
        count_steps -= 1;
    }

    if (item.get_elem() == 0)
        item = end;

    return item;
}


bool operator<(Set const &s, const int val){
    for (int i = 0; i < s.size; ++i) {
        if (s.data[i] == val)
            return true;
    }

    return false;
}