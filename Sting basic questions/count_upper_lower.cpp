#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    int upper = 0;
    int lower = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='A' and str[i]<='Z')
        {
            upper++;
        }
        else if (str[i]>='a' and str[i]<='z')
        {
            lower++;
        } 
    }
    cout<<"Upper case: "<<upper<<endl;
    cout<<"Lower case: "<<lower<<endl;

}