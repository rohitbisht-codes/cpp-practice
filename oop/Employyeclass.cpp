#include<iostream>
using namespace std;
class employee
{
    public: 
    string name;
    int salary;
    void display()
    {
        cout<<name<<endl;
        cout<<salary<<endl;
    }
};
int main()
{
    employee e1;
    e1.name = "Rohit";
    e1.salary = 450000000;
    employee e2;
    e2.name = "Aman";
    e2.salary = 4557;
    e1.display();
    e2.display();
}
