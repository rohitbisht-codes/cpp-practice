#include<iostream>
using namespace std;
int largestarray(int n, int arr[])
{
    if (n==1)
    {
        return arr[n];
    }
    int largest = arr[0];
    if (largest>arr[n])
    {
        return largestarray(n,arr);
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Ente array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
}