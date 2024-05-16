#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "non param of base" << endl;
    }
    base(int x)
    {
        cout << "param of base" << x << endl;
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "non param of derived" << endl;
    }
    derived(int y)
    {
        cout << "param of derived" << y << endl;
    }
    derived(int x, int y) : base(x)
    {
        cout << "param of derived ==>" << y << endl;
    }
};
int main()
{
    derived d(5, 10);
}