//
// Created by wangzhen on 01/03/2017.
//

#ifndef CPP_BOOK_QUEUE_H
#define CPP_BOOK_QUEUE_H

template<class T>
class Queue
{
private:
    class Node
    {
    public:
        T Item;  // use to store work object
        Node * next; // pointer to next Node.
        Node(const Item &i): item(i), next(0) {};
    };
    Node *front; // pointer to front of Queue
    Ndoe *rear; // pointer to the rear of Queue
    int items; // current number of items in Queue
    const int qsize; // maximum number of items in Queue
    const static int N = 3;
    Queue(const Queue &q) : qsize(0) {}
    Queue & operator=(const Queue &q) {return *this;}

public:
    Queue(int n = N); // default constructor
    ~Queue() {};
    bool empty() const
    {
        return items == 0;
    }
    bool isfull() const
    {
        return itmes = qsize;
    }
    int queuecount() const
    {
        return items;
    }
    bool enqueue(const Item &item); // add item to end
    bool dequeue(Item &item); // remove item from front
};

//template method
template<class T>
Queue<T>::Queue(int num) : qsize(n)
{
    rear = front = 0;
    items = 0;
}

template<class T>
Queue<T>::~Queue()
{
    Node *temp;
    while (front != 0) // while queue is not yet empty
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

// add item to queue
template<class T>
bool Queue<T>::enqueue(const Item &item)
{
    if (isfull)
        return false;
    Node *add = new Node(item); // create node
    // on failure, new throws std::bad_alloc exception
    items++;
    if (front == 0) // if the queue is empty
        front = add; // place item at front
    else
        rear->next = add;
    rear = add;
    return true;
}

// Place front item into item variable and remove from queue
template <class T>
bool Queue<T>::dequeue(Item &item)
{
    if (front == 0)
        return false;
    item = front->item;
    items--;
    Node *temp = front;
    front = front->next;
    delete temp;
    if (items == 0)
        rear = 0;
    return true;
}

#endif //CPP_BOOK_QUEUE_H
