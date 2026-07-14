#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
               count ++;
            }   
        }
     if (n/2<count)
     {
        cout<<"Output is: "<<arr[i];
        break;
     }
     
    }
   
    
    
    
}