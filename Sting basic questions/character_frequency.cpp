#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    char ch;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    cout<<"Enter Character: "<<endl;
    cin>>ch;
    int count=0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]== ch)
        {
            count++;
        }  
    }
    cout<<"Output: "<<count;
}