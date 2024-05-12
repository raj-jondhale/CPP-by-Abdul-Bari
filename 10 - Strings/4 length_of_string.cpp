#include <iostream>
using namespace std;

int main()
{
    string str = "welcome";

    int count = 0;
    int count1 = 0;
    // first method
    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    cout << "length is " << count << endl;

    // another method
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        count1++;
    }
    cout << "length is " << count1;
    return 0;
}