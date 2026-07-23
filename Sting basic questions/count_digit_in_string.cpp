#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter STRING: "<<endl;
    getline(cin,str);
    int count=0;
    for (int i = 0; i<str.length(); i++)
    {
        if (str[i]>='0' and str[i]<='9')
        {
            count++;
        } 
    }
    cout<<count;
}