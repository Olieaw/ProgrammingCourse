#ifndef LIST_H
#define LIST_H

#include <exception>

class NoItemException// : public exception
{
    int number;
public:
    NoItemException(int number) : number(number){}
    int getError()
    {
        return number;
    }
};

class BeyondTheLimitException// : public exception
{
    int i;
public:
    BeyondTheLimitException(int i) : i(i){}
    int getError()
    {
        return i;
    }
};

class List
{
    int* list;
    int size;
    int i;
    const int sizeIncrement = 6;
    void allocateMoreMemory();

public:
    List(int size = 2);
    ~List();
    void put(int number);
    void erase(int position);
    int find(int number) const;
    int rfind(int number) const;
};

#endif // LIST_H
