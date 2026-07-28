#include<iostream>
using namespace std;
int multiply(int a , int b)
{
    if (b == 0)
    {
        return 0;
    }
    return a+multiply(a,b-1);
}
int main()
{
    int a,b;
    cout<<"Enter input a: "<<endl;
    cin>>a;
    cout<<"Enter input b: "<<endl;
    cin>>b;
    cout<<multiply(a,b);

}