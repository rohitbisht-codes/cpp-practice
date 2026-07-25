#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1,str2;
    cout<<"Enter string1: "<<endl;
    getline(cin,str1);
    cout<<"Enter string2: "<<endl;
    getline(cin,str2);
    int found =0;
    if ( str1.length() != str2.length() )
    {
        cout<<"Not euqal"<<endl;
        return 0;
    }
    
    for (int i = 0; i < str1.length(); i++)
    {
            if (str1[i]!=str2[i])
            {
                found =1;
                break;

            }
  
    }
    if (found ==1)
    {
        cout<<"Strings not are equal";
    }
    else
    {
        cout<<"String are equal";
    }
    return 0;
    
}