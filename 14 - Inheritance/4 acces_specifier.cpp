class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void funBase()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};
class Derived : public Base
{
public:
    void funDerived()
    {
        // a = 10; //inaccesible
        b = 5;
        c = 15;
    }
};
int main()
{
    Base b;
    // b.a = 10;//inaccesible
    // b.b = 5;//inaccesible
    b.c = 20;
}