#include<iostream>
using namespace std;
void doublenumber(int n)
{
    int c;
    c = n*2;
    cout<<"Ouput: "<<c;

}
int main()
{
    int a;
    cout<<"Enter element: "<<endl;
    cin>>a;
    cout << "Before function: " << a << endl;
    doublenumber(a);
    cout << "\nafter function: " << a << endl;

}