#include<iostream>
using namespace std;
int sumarray(int n,int arr[])
{
    if (n==0)
    {
        return 0;
    }
    return arr[n-1]+sumarray(n-1,arr);
}
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter arraysize: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sumarray(n,arr);
    
}