#include <iostream>
using namespace std;

/*program for pass by address

*/
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 10, b = 20;
    swap(&a, &b);
    cout << a << b;
    return 0;
}