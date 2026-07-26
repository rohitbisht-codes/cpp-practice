#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter Input: "<<endl;
    getline(cin,str);
    char ch,rp;
    cout<<"Character to replace: "<<endl;
    cin>>ch;
    cout<<"Replace with: "<<endl;
    cin>>rp;
    
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==ch)
        {
           str[i] =rp;
           
        }
        
    }
    cout<<str;
}