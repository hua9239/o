#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue
{
public:
    Queue()
    {
        size = 0;      // 虛擬大小
        capacity = 16; // 實際容量
        front = 0;     // 隊首 最先推出
        back = 0;      // 隊尾 最後加入
        elements = new T[capacity];
    }
    Queue(const Queue &queue)
    {
        elements = new T[queue.capacity];
        size = queue.size;
        capacity = queue.capacity;
        front = queue.front;
        back = queue.back;
        for (int i = 0; i < size; i++)
        {
            elements[i] = queue.elements[i];
        }
    }
    ~Queue()
    {
        delete[] elements;
    }
    bool empty() const
    {
        return (size == 0);
    }
    T peek() const
    {
        return elements[front];
    }
    void push(T value)
    {
        ensureCapacity();
        elements[back] = value;
        back = (back + 1) % capacity;
        size++;
    }
    T pop()
    {
        T element = elements[front];    // 取出隊首元素
        front = (front + 1) % capacity; // 隊首指標往後移一位
        size--;                         // 隊列虛擬大小減一
        return element;
    }
    int getSize() const
    {
        return size;
    }

private:
    T *elements;
    int size;
    int capacity;
    int front;
    int back;
    void ensureCapacity() // 確保容量  實際大小無限增加
    {
        if (size >= capacity) // 如果推滿了
        {
            T *old = elements;          // 舊的元素
            capacity = 2 * size;        // 容量變兩倍
            elements = new T[size * 2]; // 新的元素

            for (int i = 0; i < size; i++)
            {
                elements[i] = old[(front + i) % size]; // 複製
            }

            delete[] old;
            front = 0;   // 重置
            back = size; // 重置
        }
    }
};

#endif