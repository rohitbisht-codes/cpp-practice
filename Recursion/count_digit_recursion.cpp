#include<iostream>
using namespace std;
int count_digit(int n)
{
    if (n==0)
    {
        return 0;
    }
    int count =0;
    return 1+ count_digit(n = n / 10);
    
}
int main()
{
    int n;
    cout<<"Enter input: "<<endl;
    cin>>n;
    cout<<count_digit(n);
}