//
// Created by wangzhen on 28/02/2017.
//

#ifndef CPP_BOOK_DMAABC_H
#define CPP_BOOK_DMAABC_H
class DMAABC
{
private:
    char *label;
    int rating;
public:
    DMAABC(const char *l = "null", int r = 0);
    DMAABC(const DMAABC &rs); // copy constructor
    virtual ~DMAABC();
    DMAABC &operator=(const DMAABC &rc);
    virtual void View() const = 0 ;
    friend std::ostream &operator<<(std::ostream &os, const DMAABC &rs);
};

// lackDMA class
class lackDMA: public DMAABC
{
private:
    char color[40];
public:
    lackDMA(const char *c = "black", const char * l = "null", int r = 0);
    lackDMA(const char *c, const DMAABC &rs);
    lackDMA(const lackDMA &rs); //copy constructor
    lackDMA & operator=(const lackDMA &rs); // assignment operator
    virtual void View() const;
    friend std::ostream &operator<<(std::ostream &os, const lackDMA &rc);
};

class hasDMA: public DMAABC
{
private:
    char *style; //use new in constructor.
public:
    hasDMA(const char *s = "none", const char *l = "null", int r = 0);
    hasDMA(const char *s, const DMAABC &rs);
    hasDMA(const hasDMA &rs); //copy constructor
    hasDMA & operator=(const hasDMA &rs); //assignment operator
    virtual ~hasDMA();
    virtual void View() const;
    friend std::ostream &operator<<(std::ostream &os, const hasDMA &rc);
};
#endif //CPP_BOOK_DMAABC_H
