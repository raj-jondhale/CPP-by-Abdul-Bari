#include <iostream>
using namespace std;

/*program for global and local variables

*/
int g = 5;
void fun()
{
    int a = 10;
    a++;
    g++;
    cout << a << " " << g << endl;
}
int main()
{
    cout << g;
    fun();
    cout << g << endl;
}