#include<iostream>
using namespace std;
class studentclass
{
public:
    string name;
    int roll_no;
    float marks;
    void display()
{
    cout << name << endl;
    cout << roll_no << endl;
    cout << marks << endl;
}
};
int main()
{
    studentclass s1;
    s1.name = "Rohit";
    s1.roll_no = 44;
    s1.marks = 87.7;
    s1.display();
}

