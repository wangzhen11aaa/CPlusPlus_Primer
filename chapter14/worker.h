//
// Created by wangzhen on 01/03/2017.
//

#ifndef CPP_BOOK_WORKER_H
#define CPP_BOOK_WORKER_H

#include <string>
class Worker
{
private:
    std::string fullname;
    long id;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Worker(): fullname("no one") , id(0L) {} // default constructor
    Worker(const std::string &s, long n):fullname(s), id(n) {}
    virtual ~Worker() = 0; // pure virtual function
    virtual void Set() = 0;
    virtual void Show() const = 0;
};

class Waiter:virtual public Worker
{
private:
    int panache;
protected:
    virtual void Data() const;
    virtual void Get();
public:
    Waiter():Worker(), panache(0){}
    Waiter(const std::string &s, long n, int p = 0)
            :Worker(s, n), panache(p) {}
    Waiter(const Worker &wk, int p = 0)
            :Worker(wk), panache(p) {}

    void Set();
    void Show() const;
};

class Singer: virtual public Worker
{
protected:
    enum{other, alto, contralto, soprano, bass, baritone, tenor};

    enum{Vtype = 7};
    virtual void Get();
    virtual void Data() const;
private:
    static const char *pv[Vtype]; // string equivs of voice types
    int voice;
public:
    Singer():Worker(), voice(other) {}
    Singer(const std::string &s, long n, int v = other)
            :Worker(s, n), voice(v) {}
    Singer(const Worker &wk, int v = other)
            :Worker(wk), voice(v) {}
    void Set();
    void Show() const;

};

// multiple inheritance
class SingingWaiter:  public Waiter ,public Singer
{
protected:
    virtual void Data() const;
    virtual void Get();
public:
    SingingWaiter() {}
    SingingWaiter(const std::string &s, long n, int p = 0, int v = other)
            :Worker(s, n), Waiter(s, n , p), Singer(s, n, v) {}
    SingingWaiter(const Worker &wk, int p = 0, int v = other)
            :Worker(wk), Waiter(wk, p), Singer(wk, v) {}
    SingingWaiter(const Waiter &wt, int v = other)
            :Worker(wt), Waiter(wt), Singer(wt, v) {}
    SingingWaiter(const Singer &wt, int p = 0)
            :Worker(wt), Waiter(wt, p), Singer(wt) {}

    void Set();
    void Show() const;

};




#endif //CPP_BOOK_WORKER_H
