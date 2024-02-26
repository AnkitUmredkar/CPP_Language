#include<iostream>
using namespace std;

class A
{
protected :
    int a = 10;
};

class B : virtual public A
{
protected :
    int b = 20;
};

class C : virtual public A
{
protected :
    int c = 30;
};

class D : public B, public C
{
public :
    void print()
    {
        cout << a << " " << b << " " << c;
    }
};

int main()
{   
    D d1;
    d1.print();
    return 0;
}



