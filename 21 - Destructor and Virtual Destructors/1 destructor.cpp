#include <iostream>
using namespace std;

class demo
{
private:
    int *p;

public:
    demo()
    {
        p = new int[10];
        cout << "constructor demo" << endl;
    }
    ~demo()
    {
        delete[] p;
        cout << "destructor  demo" << endl;
    }
};
void fun()
{
    demo *p = new demo();
    delete[] p;
}

int main()
{
    fun();
}