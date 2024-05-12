#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a, b, c;
    float root1, root2;

    cout << "enter 3 values";
    cin >> a >> b >> c;

    //formula
    root1 = (-b + sqrt(b * b - 4 * a * c))/(2*a);
    root2 = (-b - sqrt(b * b - 4 * a * c))/(2*a);

    cout << "root 1 is" << root1 << endl;
    cout << "root 2 is" << root2 << endl;

    return 0;
}