#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array elemtns: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        int temp = 0;
        if (arr[i]%2!=0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (arr[j]%2==0)
                {
                    
                    temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    break;
                }
                
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
    
}