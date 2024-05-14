#include <iostream>
using namespace std;

/*program for creating structure and class

*/
// only difference is in structure data members are public but in classes they are private
// you should have to declare public for accesing outside
class demo
{
public:
    int x;
    int y;
    void display()
    {
        cout << x << " " << y << endl;
    }
};
int main()
{
    demo d;
    d.x = 10;
    d.y = 20;
    d.display();
}