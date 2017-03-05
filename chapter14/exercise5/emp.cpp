//
// Created by wangzhen on 05/03/2017.
//

#include "emp.h"

using std::cin;
using std::cout;
using std::endl;
using std::ostream;

//default constructor
abstr_emp::abstr_emp()
{

}

abstr_emp::~abstr_emp() { }

abstr_emp::abstr_emp(const std::string &fn, const std::string &ln, const std::string &j): fname(fn), lname(ln), job(j)
{
}

void abstr_emp::ShowAll() const
{
    cout << fname << "\t" << lname <<  job << endl;
}

void abstr_emp::SetAll()
{
    cout << "Input first name, last name  and job by line";
    getline(cin, fname);
    getline(cin, lname);
    getline(cin, job);
}

ostream & operator<<(ostream &os, const abstr_emp &e)
{
    os << e.fname << e.lname << e.job << endl;
    return os;
}

// employee class
employee::employee()
{

}

employee::employee(const std::string &fn, const std::string &ln, const string &j):abstr_emp(fn, ln, j)
{

}

void employee::ShowAll() const
{
    abstr_emp::ShowAll();
}
void employee::SetAll()
{
    abstr_emp::SetAll();
}

// manager class

manager::manager()
{

}

manager::manager(const string &fn, const string &ln, const string &j,int ico):abstr_emp(fn, ln, j), inchageof(ico)
{}

manager::manager(const abstr_emp &e, int ico):abstr_emp(e), inchageof(ico) { }
manager::manager(const manager &m): abstr_emp(m), inchageof(m.inchageof)
{

}

void manager::ShowAll() const
{
    cout << "inchangeof :" << inchageof << endl;
    abstr_emp::ShowAll();
}

void manager::SetAll()
{
    cout << "input inchargeof : \n";
    cin >> inchageof;
    abstr_emp::SetAll();
}

// fink class

fink::fink()
{

}

fink::fink(const abstr_emp &e, const string &rpo):abstr_emp(e),reportsto(rpo)
{

}

fink::fink(const fink &e):abstr_emp(e)
{
    reportsto = e.reportsto;
}

fink::fink(const string &fn, const string &ln, const string &j, const string &rpo):abstr_emp(fn, ln, j), reportsto(rpo)
{

}

void fink::ShowAll() const
{
    cout << "Reportsto " << reportsto << endl;
    abstr_emp::ShowAll();
}

void fink::SetAll()
{
    cout << "Input reportsto \n";
    getline(cin, reportsto);
    abstr_emp::SetAll();
}

// highfink class

highfink::highfink() { }

highfink::highfink(const abstr_emp &e, const string &rpo, int ico):abstr_emp(e), manager(e, ico), fink(e, rpo) { }
highfink::highfink(const fink &f, int ico):abstr_emp(f),manager(f, ico), fink(f){ }
highfink::highfink(const highfink &h):abstr_emp(h), manager(h), fink(h){}
highfink::highfink(const std::string &fn, const std::string &ln, const std::string &j, const std::string &rpo,
                   int ico):abstr_emp(fn, ln, j), manager(fn,ln, j, ico), fink(fn, ln, j, rpo) { }
highfink::highfink(const manager &m, const std::string &rpo):abstr_emp(m), manager(m), fink(m,rpo) { }

void highfink::ShowAll() const
{
    cout << "Inchargeof " << manager::InChargeOf();
    cout << "Reportsto " << fink::ReportsTo();
    abstr_emp::ShowAll();
}

void highfink::SetAll()
{
    int _incharageof = manager::InChargeOf();
    cout << "Input chargeof \n";
    cin >> _incharageof;
    string _reportsto = fink::ReportsTo();
    cout << "Input reportsto \n";
    cin >> _reportsto;
    abstr_emp::SetAll();
}


