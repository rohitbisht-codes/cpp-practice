#include<iostream>
using namespace std;
void largest()
{
    int a,b,c;
    cout<<"Enter number: ";
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"Largest: "<<a;
    }
    else if (b>c && b>a)
    {
        cout<<"Largest: "<<b; 
    }
    else if (c>a && c> b)
    {
        cout<<"Largest is "<<c;
    }
    else if(a==b && b==c && c==a)
    {
        cout<<"Equal";
    }
    else if (a==b && a>c && b>c)
    {
        cout<<"Largest"<<a;
        }  
}
int main()
{
    largest();
}