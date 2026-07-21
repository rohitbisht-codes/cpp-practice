#include<iostream>
using namespace std;
void swap(int &a,int&b)
{
    int temp = a;
    a = b;
    b = temp;
    cout<<"The value of a is "<<a<<"The value of b is "<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"Enter Inputs: "<<endl;
    cin>>x>>y;
    swap(x,y);
}