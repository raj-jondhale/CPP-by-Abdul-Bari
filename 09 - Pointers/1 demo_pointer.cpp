#include <iostream>
using namespace std;

/*program for demo pointers

*/
int main()
{
    int a = 10;
    int *p = &a;
    cout << a << endl;  // 10
    cout << &a << endl; // address of a
    cout << p << endl;  // address pf a
    cout << &p << endl; // address of p
    cout << *p << endl; // 10
    return 0;
}