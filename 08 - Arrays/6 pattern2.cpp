#include <iostream>
using namespace std;

/*program for draw pattern 2 using nested for loop

*/
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i >= j)
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}