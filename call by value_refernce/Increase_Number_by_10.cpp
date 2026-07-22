#include<iostream>
using namespace std;
void increase(int&a)
{
   
    a = a+10;
    cout<<"After: "<<a;

}
int main()
{
    int x;
    cout<<"Enter elemnets: "<<endl;
    cin>>x;
    increase(x);
}