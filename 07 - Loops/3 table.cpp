#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "enter n" << endl;
    cin >> n;

    for (i = 1; i <= 10; i++)
    {
        cout << n * i << endl;
    }
    return 0;
}