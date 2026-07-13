#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elemtns: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int smallest = arr[0];
    int sec_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<smallest)
        {
            sec_smallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i]>smallest and arr[i] <sec_smallest)
        {
            sec_smallest = arr[i];
        }
        
        
        
    }
    cout<<sec_smallest;
    

    
}