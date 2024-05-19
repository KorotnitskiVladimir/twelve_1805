#include <iostream>
using namespace std;

class fractioanal
{
private:
    int c;
    int d;
public:
    fractioanal()
    {
        this->c = 0;
        this->d = 0;
    }
    fractioanal(int a , int b)
    {
        this->c = a;
        this->d = b;
    }
    void init(int a, int b);
    void show();
    fractioanal add (fractioanal a, fractioanal b);
    fractioanal diff (fractioanal a, fractioanal b);
    fractioanal mult (fractioanal a, fractioanal b);
    fractioanal div (fractioanal a, fractioanal b);
};

inline void fractioanal::init(int a, int b)
{
    this->c = a;
    this->d = b;
}

inline void fractioanal::show()
{
    cout << this->c << "/" << this->d << endl;
}

inline fractioanal fractioanal::add(fractioanal a, fractioanal b)
{
    fractioanal c;
    if (a.d==b.d)
    {
        c.c = a.c + b.c;
        c.d = a.d;
    }
    else
    {
        c.d = a.d * b.d;
        c.c = a.c * b.d + b.c * a.d;
    }
    return c;
}

inline fractioanal fractioanal::diff(fractioanal a, fractioanal b)
{
    fractioanal c;
    if (a.d==b.d)
    {
        c.c = a.c - b.c;
        c.d = a.d;
    }
    else
    {
        c.d = a.d * b.d;
        c.c = a.c * b.d - b.c * a.d;
    }
    return c;
}

inline fractioanal fractioanal::mult(fractioanal a, fractioanal b)
{
    fractioanal c;
    c.c = a.c * b.c;
    c.d = a.d * b.d;
    return c;
}

inline fractioanal fractioanal::div(fractioanal a, fractioanal b)
{
    fractioanal c;
    c.c = a.c * b.d;
    c.d = a.d * b.c;
    return c;
}