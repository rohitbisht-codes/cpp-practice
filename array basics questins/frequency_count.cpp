#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Array Size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter array element: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int found = 0;
      for (int j = 0; j < i; j++)
      {
        if (arr[j]==arr[i])
        {
            found = 1;

        }
        
      }
      if (found ==1 )
      {
        continue;
      }
      
      int count = 1;
        for (int k = i+1; k < n; k++)
        {
            if (arr[i]==arr[k])
            {
                count++;
            }
            
        }
        
        cout << arr[i] << " -> " << count;
    }
    
    


}