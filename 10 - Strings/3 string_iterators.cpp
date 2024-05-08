#include <iostream>
using namespace std;

int main()
{
    string str = "today";
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
        // *it = *it - 32;  return string in uppercase
    }
    cout << endl;
    string::reverse_iterator it1;

    for (it1 = str.rbegin(); it1 != str.rend(); it++)
    {
        cout << *it1;
        // *it = *it - 32;  return string in uppercase
    }
    return 0;
}