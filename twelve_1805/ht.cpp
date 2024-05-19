#include "Fractioanal.h"

int main()
{
    fractioanal a(4, 5);
    fractioanal b;
    fractioanal c;
    b.init(1, 6);
    a.show();
    b.show();
    //c = a.add(a, b);
    //c = a.diff(a, b);
    //c = a.mult(a, b);
    c = a.div(a, b);
    c.show();
    return 0;
}