#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    getline(cin,str);
    string res = "";
    for (int i = 0; i < str.length(); i++)
    {
        int found = 0;
        for (int j = 0; j < res.length(); j++)
       {
        if (str[i]==res[j])
        {
            found = 1;
        }
       }
       if (found == 1)
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