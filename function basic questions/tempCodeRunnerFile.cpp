#include<iostream>
using namespace std;
void sum(int a,int b)
{
   int c = a+b; 
   cout<<"the sum is"<<c;
}
int main()
{
    int num1,num2;
    cout<<"Enter numbers: "<<endl;
    cin>>num1>>num2;
    sum(num1,num2);
}