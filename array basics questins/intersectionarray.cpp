#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr1[n];
    cout<<"Enter Array Elemnts: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    int m;
    cout<<"Enter Arry size: "<<endl;
    cin>>m;
    int arr2[m];
    cout<<"Enter array element: "<<endl;
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = 0; j < m; j++)
        {
            if (arr1[i]==arr2[j])
            {
                found = 1;
                break;
            }
            
        }
        if (found ==1)
        {
           cout<<arr1[i];
        }
        
    }
    return 0;

}