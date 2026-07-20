#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
    
}
int main()
{
    int num1;
    cout<<"Enter elements: "<<endl;
    cin>>num1;
    int result = factorial(num1);
    cout<<result;
}