#include<iostream>
using namespace std;
int linear_search(int n,int arr[],int target)
{
    if (n==0)
    {
        return 0;
    }
    
    if (arr[n-1]==target)
    {
       return 1;
    }
    else{
        return linear_search(n-1, arr, target);
    }
    

}
int main()
{
    int n;
    cout<<"Enter array sizze: "<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target element: "<<endl;
    cin>>target;
    cout<<linear_search(n,arr,target);

    
}