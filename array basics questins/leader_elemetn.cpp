#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENter array size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array Elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int leader = 0;

    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]<arr[j])
            {
                found = 1;
            }
            
        }  
        if (found == 0)
        {
            leader = 0;
            cout<<arr[i]<<" ";
        }
               
    }   
    if (leader == 1)
    {
        cout<<"Eror";
    }
    
    
}