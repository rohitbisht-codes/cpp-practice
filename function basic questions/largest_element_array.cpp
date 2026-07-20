#include<iostream>
using namespace std;
int largestarray(int n,int arr[])
{
    
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
        }
        
    }
    return largest;
}
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int result = largestarray(n,arr);
    cout<<"The largest of array is "<<result;
    
}