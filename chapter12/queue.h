//
// Created by wangzhen on 27/02/2017.
//

#ifndef CPP_BOOK_QUEUE_H
#define CPP_BOOK_QUEUE_H

// This queue will contain Customer items
class Customer
{
private:
    long arrive; // arrival time for customer
    int processtime; // processing time for customer
public:
    Customer() {arrive = processtime = 0;}
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}

};

typedef Customer Item;

class Queue
{
private:
    // class scope definition
    // Node is nested structure definition to this class
    struct Node {Item item; struct Node * next;};
    enum {Q_SIZE = 10};
    //private class members
    Node *front; // pointer to front of Queue
    Node *rear; // pointer to rear of Queue
    int items; // current number of items in Queue
    const int qsize; // maximum number of items in Queue

public:
    Queue(int qs = Q_SIZE); // create queen with a qs limit
    // preemptive definitions to prevent public copying
    Queue(const Queue &q) : qsize(0) { }
    Queue &operator=(const Queue &q){return *this;}

    // Normal member methods
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item &item); // add item to end
    bool dequeue(Item &item); // remove item from front
};

#endif //CPP_BOOK_QUEUE_H
