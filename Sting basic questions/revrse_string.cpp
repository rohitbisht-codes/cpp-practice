#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;

    cout << "Enter String: " << endl;
    getline(cin, str);

    int count = str.length();

    for (int i = count - 1; i >= 0; i--)
    {
        cout << str[i];
    }

    return 0;
}