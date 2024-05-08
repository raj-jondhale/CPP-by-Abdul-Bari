#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "enter string";
    // cin >> str;
    getline(cin, str);
    cout << str;
    getline(cin, str);
    cout << str;
    return 0;
}