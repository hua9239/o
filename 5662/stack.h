#ifndef STACK_H
#define STACK_H

#include <algorithm>

template <typename THE_TYPE>
class Stack
{
public:
    Stack()
    {
        size = 0;
        capacity = 16;
        elements = new THE_TYPE[capacity];
    }

    Stack(const Stack &other)
    {
        size = other.size;
        capacity = other.capacity;
        elements = new THE_TYPE[capacity];
        std::copy(other.elements, other.elements + other.size, elements); // original start, original end, new start
    }

    ~Stack()
    {
        delete[] elements;
    }

    bool empty() const
    {
        return size == 0;
    }

    THE_TYPE peek() const
    {
        return elements[size - 1];
    }

    void push(THE_TYPE value)
    {
        ensureCapacity();
        elements[size++] = value;
    }

    THE_TYPE pop()
    {
        return elements[--size];
    }

    int getSize() const
    {
        return size;
    }

private:
    THE_TYPE *elements;
    int size;
    int capacity;

    void ensureCapacity()
    {
        if (size >= capacity)
        {
            capacity *= 2;
            THE_TYPE *new_elements = new THE_TYPE[capacity];
            std::copy(elements, elements + size, new_elements);
            delete[] elements;
            elements = new_elements;
        }
    }
};

#endif
