#include<iostream>
using namespace std;
void largets(int a,int b,int c)
{
  
    if (a>b && a>c)
    {
        cout<<"Largest: "<<a;
    }
    else if (b>c && b>a)
    {
        cout<<"Largest: "<<b; 
    }
    else if (c>a && c> b)
    {
        cout<<"Largest is "<<c;
    }
    else if(a==b && b==c && c==a)
    {
        cout<<"Equal";
    }
    else if (a==b && a>c && b>c)
    {
        cout<<"Largest"<<a;
        }  
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter Number: "<<endl;
    cin>>num1>>num2>>num3;
    largets(num1,num2,num3);


}