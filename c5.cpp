#include <iostream>
using namespace std;
class A {
public:
    int a;
    void show()
    {
        cout << "Showing class A"<< " variable a: " << a << endl;
    }
};
class B : public A {
public:
    int b;
    void show()
    {
        cout << "Showing class A " << "variable a: " << a << endl;
        cout << "Showing class B "<< " variable b: "<< b << endl;
    }
};
int main()
{
    A* aptr ;
    A obj;
    B obj1;
    aptr = &obj1;
    aptr->a = 45;
    aptr->show();
    aptr->a = 3400;
    aptr->show();
    B* bptr;
    bptr = &obj1;
    bptr->a = 9448;
    bptr->b = 98;
    bptr->show();
    return 0;
}
 