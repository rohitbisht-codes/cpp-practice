#include<iostream>
using namespace std;
void largest()
{
    int n,m;
    cout<<"Enter a: "<<endl;
    cin>>n;
    cout<<" Enter b: "<<endl;
    cin>>m;
    if (n>m)
    {
        cout<<"Largest Number is: "<<n;
    }
    else if (m>n)
    {
        cout<<"Largest is: "<<m;
    }
    else if(m==n)
    {
        cout<<"Both Are equal"<<endl;
    }
}
int main()
{
  largest();
}