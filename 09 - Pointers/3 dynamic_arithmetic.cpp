// Program to Demonstrate Pointer Arithmetic
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p = A, *q = &A[4];
    cout << *p << endl; // 2
    cout << endl;
    p++;
    cout << *p << endl; // 4
    cout << endl;
    p--;
    cout << *p << endl; // 2
    cout << endl;
    cout << p << endl;     // address of first element
    cout << p + 2 << endl; // address of third element
    cout << endl;
    cout << *p << endl;       // 2
    cout << *(p + 2) << endl; // 6
    cout << endl;
    cout << q - p << endl; // 4
    cout << p - q << endl; //-4
    return 0;
}