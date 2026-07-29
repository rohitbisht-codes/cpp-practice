#include<iostream>
using namespace std;
int sumodd(int n)
{
    if (n==0)
    {
        return 0;
    }
    int last = n%10;
    n =n/10;
    if (last%2!=0)
    {
        return last + sumodd(n);
    }
    return sumodd(n);
}
int main()
{
    int n;
    cout<<"Enter Input: "<<endl;
    cin>>n;
    cout<<sumodd(n);
}