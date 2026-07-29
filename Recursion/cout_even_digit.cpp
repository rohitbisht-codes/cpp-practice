#include<iostream>
using namespace std;
int evencount(int n)
{
    if(n==0)
    {
        return 0;
    }
    int last = n%10;
    n = n/10;
    if (last%2==0)
    {
        
        return 1+ evencount(n);
    }
    return 0 + evencount(n);

}
int main()
{
    int n;
    cout<<"Enter input: "<<endl;
    cin>>n;
    cout<<evencount(n);
}