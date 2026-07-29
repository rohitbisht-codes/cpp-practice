#include<iostream>
using namespace std;
int smallest(int n)
{
    if (n<10)
    {
      return n;
    }
    int last = n%10;
    n = n/10;
    if (last<smallest(n))
    {
        return last;
    }
    return smallest(n);
}
int main()
{
    int n;
    cout<<"Enter input: "<<endl;
    cin>>n;
    cout<<smallest(n);
}