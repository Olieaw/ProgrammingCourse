#include "list.h"

List::List(int size) : size(size)
{
    list = new int[size];
    i = -1;
}

List::~List()
{
    delete[] list;
}

void List::allocateMoreMemory()
{
    int* t = new int[size += sizeIncrement];
    for (int i = 0; i <= this->i; ++i)
    {
        t[i] = list[i];
    }
    delete[] list;
    list = t;
}

void List::put(int number)
{
    if (i == size - 1)
    {
        allocateMoreMemory();
    }
    list[++i] = number;
}

void List::erase(int position)
{
    if (position > i)
    {
        throw BeyondTheLimitException(position);
    }
    for (int i = position; i <= --this->i; ++i)
    {
        list[i] = list[i + 1];
    }
    int* t = new int[size];
    for (int i = 0; i <= this->i; ++i)
    {
        t[i] = list[i];
    }
    delete[] list;
    list = t;
}

int List::find(int number) const
{
    for (int i = 0; i <= this->i; ++i)
    {
        if (list[i] == number)
            return i;
    }
    throw NoItemException(number);
}

int List::rfind(int number) const
{
    for (int i = this->i; i >= 0; --i)
    {
        if (list[i] == number)
            return i;
    }
    throw NoItemException(number);
}
