#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "Enter Rotation: ";
    cin >> k;

    for (int rotation = 0; rotation < k; rotation++)
    {
        int temp = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}