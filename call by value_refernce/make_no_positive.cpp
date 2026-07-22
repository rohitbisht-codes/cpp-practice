#include<iostream>
using namespace std;
void makepositive(int&n)
{
    if (n<0)
    {
        
        n = n*-1;
        cout<<"Output= "<<n;
    }
    
}
int main()
{
    int x;
    cout<<"Enter element: "<<endl;
    cin>>x;
    makepositive(x);

}