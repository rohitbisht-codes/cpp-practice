#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Array Element: "<<endl;
    int repeated = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int found = 0;
        for (int j = i+1; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                found = 1;
                break;
            }
            
        }    
        if (found ==1)
        {
            repeated = 1;
            cout<<"The Repating Elemet is"<<arr[i];
            break;
        }   

    }
    if (repeated == 0)
    {
        cout<<"No Repating elements"<<endl;
    }
    
    return 0;
    
    
}