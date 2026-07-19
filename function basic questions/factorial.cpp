#include<iostream>
using namespace std;
void factorial()
{
    int n;
    cout<<"enter elemts: "<<endl;
    cin>>n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    cout<<fact;
}
int main()
{
    factorial();
}