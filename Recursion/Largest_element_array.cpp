#include<iostream>
using namespace std;
int largestarray(int n, int arr[])
{
    if (n==1)
    {
        return arr[n-1];
    }
    int largest = largestarray(n - 1, arr);
    if (largest>arr[n-1])
    {
        return largest;
    } 
    else{
        return arr[n-1];
    }
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
    cout<<"larges element is"<<largestarray(n,arr);
}