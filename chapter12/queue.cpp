//
// Created by wangzhen on 27/02/2017.
//

#include "queue.h"
#include <cstdlib> // for rand()

// Queue methods
Queue::Queue(int qs): qsize(qs)
{
    front = rear = NULL; // NULL
    items = 0;
}

Queue::~Queue()
{
    Node *temp;
    while (front != NULL)
    {
        temp = front; // save address of front item
        front  = front->next; // reset pointer to next item
        delete temp; // delete former front
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

// Add item to queue
bool Queue::enqueue(const Item &item)
{
    if (isfull())
        return false;
    else
    {
        Node *temp = new Node;
        temp->next = NULL;
        temp->item = item;

        if(front == NULL) // if queue is empty.
            front = temp;
        else
            rear->next = temp; // append item to the queue.
        rear = temp;
        ++items;
        return true;
    }
}

// Place front item into item variable and remove from queue
bool Queue::dequeue(Item &item)
{
    if (isempty())
        return false;
    else
    {
        item = front->item;
        --items;
        Node *temp = front;
        front = front->next;
        delete temp;

        if(items == 0)
            rear = NULL;
        return true;
    }
}

// time to set a random value in the range 1 - 3
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}
