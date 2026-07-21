#include<iostream>
using namespace std;
void doubleNumber(int &n)
{
    n=n*2;
    cout<<"Output is:"<<n;
}
int main()
{
    int a;
    cout<<"ENTER NUM: "<<endl;
    cin>>a;
    doubleNumber(a);
    
}