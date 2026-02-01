#include <iostream>
using namespace std;

class CGPA
{
    float credit;
    float grade;

public:
    // Input function
    void input()
    {
        cin >> credit >> grade;
    }

    // Overload * operator
    float operator*(CGPA obj)
    {
        return (credit * grade);
    }
};

int main()
{
    CGPA s1, s2;

    cout << "Enter credit and grade for Student 1: ";
    s1.input();

    cout << "Enter credit and grade for Student 2: ";
    s2.input();

    float cgpa1 = s1 * s1;   // credit * grade of student 1
    float cgpa2 = s2 * s2;   // credit * grade of student 2

    cout << "\nCGPA of Student 1 = " << cgpa1 << endl;
    cout << "CGPA of Student 2 = " << cgpa2 << endl;

    return 0;
}
