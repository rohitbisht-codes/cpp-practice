#include<iostream>
using namespace std;
int fibnacoii(int n)
{
    if (n==0)
    {
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return fibnacoii(n-1) + fibnacoii(n-2);  
}
int main()
{
    int n;
    cout<<"Enter input "<<endl;
    cin>>n;
    cout<<fibnacoii(n);
}