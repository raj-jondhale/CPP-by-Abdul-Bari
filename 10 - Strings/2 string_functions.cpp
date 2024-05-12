#include <iostream>
using namespace std;

int main()
{
    string s = "Hello";

    s.length(); // length of string 5

    s.size(); // 5

    s.capacity(); // capacity of s

    s.resize(30); // it resizes to size 30

    s.max_size(); // give maxmium possible size

    s.clear(); // clear the content

    if (s.empty())
        cout << "string is empty";
    // empty or not
    else
    {
        cout << "string is  " << s;
    }

    s.append("world");

    // s.insert(3,"hi")insert at 3rd position

    string str = "programming";
    str.replace(1, 3, "replace");

    // str.erase();
    // str.push_back("h");//it append letter
    // str.pop_back();it removes one letter from string from last
    // str.swap(s);swaping

    // s.find(),s.rfind()

    // s.substr(2,3);  it returns substring from index 2 to 3 numbers

    // s.compare(str); if both strings are equal then return 0 else gives difference of ascii values

    string str1 = "hello";
    string str2 = "world";

    cout << str1.at(4) << endl; // returns index 4 letter
    cout << str1[4] << endl;    // returns index 4 letter
    // str1[4]='h'  it can also change the letter
    cout << str1.front() << endl; // return first letter
    cout << str1.back() << endl;  // return last letter

    string str3 = str1 + str2;
    cout << str3 << endl;

    return 0;
}