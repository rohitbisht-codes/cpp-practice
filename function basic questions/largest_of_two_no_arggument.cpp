#include<iostream>
using namespace std;
int largest(int a,int b)
{
    if (a>b)
    {
       return a;
    }
    else if (b>a)
    {
        return b;
    }
    else{
       return a;
    }
}
int main(){
    int num1,num2;
    cout<<"Enter elemts: ";
    cin>>num1>>num2;
    int result = largest(num1,num2);
    cout<<result;
}