#include<iostream>
using namespace std;
void evenodd(int n)
{
    int found = 0;
    if (n%2==0)
    {
        found = 0;
    }
    else{
        found =1;
    }
    if (found == 0)
    {
        cout<<"even"<<endl;
    }
    else if (found == 1)
    {
        cout<<"ODD"<<endl;
    }
}
int main()
{
    int num1;
    cout<<"Enter number: "<<endl;
    cin>>num1;
    evenodd(num1);
}