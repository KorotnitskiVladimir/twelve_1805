#include <iostream>
using namespace std;
void myFunc()
{
    cout << "this simple function shows text" << endl;
}

template <class A, class B>
auto summ(A a, B b)
{
    return a+b;
}