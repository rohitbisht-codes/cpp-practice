#include<iostream>
using namespace std;
void prime()
{
    int n;
    cout<<"Enter elements: "<<endl;
    cin>>n;
    int found = 0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            found = 1;
            break;
        }
        
    }
    if (found == 1)
    {
        cout<<"not prime.";
    }
    else{
        cout<<"prime no";
    }
}
int main(){
    prime();
}