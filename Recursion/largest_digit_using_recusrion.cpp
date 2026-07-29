#include<iostream>
using namespace std;
int largesst(int n)
{
    if (n==0)
    {
       return 0;
    }
    int last = n%10;
    n = n/10;
    if (last>largesst(n))
    {
        return last;
    }
    return largesst(n);
    
}
int main()
{
    int n;
    cout<<"Enter input: "<<endl;
    cin>>n;
    cout<<largesst(n);
}