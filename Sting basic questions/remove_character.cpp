#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    char ch;
    cout<<"Enter Character: "<<endl;
    cin>>ch;
    string res ="";
    for (int i = 0; i < str.length(); i++)
    {
       if (str[i]==ch)
       {
        
         continue;
       }
       else
       {
         res = res + str[i];
       }
       
    }
    cout<<res;
    

}