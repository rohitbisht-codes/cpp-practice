#include<iostream>
using namespace std;
int digit(int n)
{
    if (n==0)
    {
        return 0;
    }
    int last = n % 10;
    n = n / 10;
    return last + digit(n);
}
int main()
{
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    cout<<digit(n);
}