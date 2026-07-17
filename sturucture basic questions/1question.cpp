#include<iostream>
using namespace std;

struct student
{
    char name[20];
    int rollno;
    float marks;
};

int main()
{
    struct student rohit, harry, ivy;

    cout <<"Enter Rohit's Details:" << endl;
    cin >> rohit.name;
    cin >> rohit.rollno;
    cin >> rohit.marks;

    cout << "Enter Harry's Details:" << endl;
    cin >> harry.name;
    cin >> harry.rollno;
    cin >> harry.marks;

    cout << "Enter Ivy's Details:" << endl;
    cin >> ivy.name;
    cin >> ivy.rollno;
    cin >> ivy.marks;

    cout << "\nStudent Details:\n";

    cout << rohit.name << " " << rohit.rollno << " " << rohit.marks << endl;
    cout << harry.name << " " << harry.rollno << " " << harry.marks << endl;
    cout << ivy.name << " " << ivy.rollno << " " << ivy.marks << endl;

    return 0;
}