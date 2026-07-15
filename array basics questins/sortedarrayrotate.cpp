#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elemts: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int count = 0;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
            count++;
        }
    }
    if (arr[n-1]>arr[0])
    {
        count++;
    }   
    
   if (count<=1)
   {
    cout<<"Yes it is sorted";
   }
   else{
    cout<<"NO it is not sorted";
   }
   
    
    
    
}