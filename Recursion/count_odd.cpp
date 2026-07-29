#include<iostream>
using namespace std;
int odd(int n)
{
    if (n==0)
    {
        return 0;
    }
    int last = n%10;
    n = n/10;
    if (last%2!=0)
    {
        return 1 + odd(n);
    }
    return 0+ odd(n);
}
int main()
{
    int n;
    cout<<"Enter inputs: "<<endl;
    cin>>n;
    cout<<odd(n);

}