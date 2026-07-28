#include<iostream>
using namespace std;
int sume(int n)
{
    if (n==0)
    {
        return 0;
    }
    return n + sume(n-1);
}
int main()
{
    int n;
    cout<<"Enternumber: ";
    cin>>n;
    cout<<sume(n);

}
