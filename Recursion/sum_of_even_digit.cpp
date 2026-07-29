#include<iostream>
using namespace std;
int sumeven(int n)
{
    if (n==0)
    {
        return 0;
    }
    int last = n%10;
    n = n/10;
    if (last%2==0)
    {
        return last + sumeven(n);
    }
    return sumeven(n);   
}
int main()
{
    int n;
    cout<<"Enter Input: "<<endl;
    cin>>n;
    cout<<sumeven(n);
}