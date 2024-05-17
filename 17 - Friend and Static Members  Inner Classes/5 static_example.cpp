#include <iostream>
using namespace std;

class Student
{
public:
    int rno;
    string name;
    static int admn;

    Student(string n)
    {
        admn++;
        rno = admn;
        name = n;
    };
    void display()
    {
        cout << "Roll no : " << rno << endl
             << "Name :" << name << endl;
    };
};
int Student::admn = 0;
int main()
{
    Student s1("Jhon");
    Student s2("suresh");
    Student s3("Madhuri");
    Student s4("Mani");
    Student s5("Abhijit");
    Student s6("Prachi");

    s1.display();
    s4.display();
    cout << "Number Admission " << Student::admn << endl;
}