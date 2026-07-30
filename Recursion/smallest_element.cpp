#include<iostream>
using namespace std;
int smallestarray(int n,int arr[])
{
    if (n==1)
    {
        return arr[0] ;
    }
    int smallest = smallestarray(n-1,arr);
    if (smallest<arr[n-1])
    {
        return smallest;
    }
    else
    {
        return arr[n-1];
    }
}
int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elemetns: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<smallestarray(n,arr);
    
}