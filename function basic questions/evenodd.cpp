#include<iostream>
using namespace std;
void evenodd()
{
    int n;
    cout << "Enter a: ";
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }
}
int main()
{
    evenodd();
}