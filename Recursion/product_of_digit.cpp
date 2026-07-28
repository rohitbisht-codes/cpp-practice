#include<iostream>
using namespace std;
int productdigit(int n)
{
    if (n==0)
    {
        return 1;
    }
    int last = n%10;
    n = n/10;
    return last * productdigit(n);
}
int main()
{
    int n;
    cout<<"Enter input: "<<endl;
    cin>>n;
    cout<<productdigit(n);

}
