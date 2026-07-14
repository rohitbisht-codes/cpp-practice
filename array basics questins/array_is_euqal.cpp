#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;

    int arr1[n];
    cout << "Enter Array 1 Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cout << "Enter Array Size: ";
    cin >> m;

    int arr2[m];
    cout << "Enter Array 2 Elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    if (n != m)
    {
        cout << "Arrays are Not Equal";
        return 0;
    }

    int found = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        cout << "Arrays are Not Equal";
    }
    else
    {
        cout << "Arrays are Equal";
    }

    return 0;
}