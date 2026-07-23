#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    int found = 0;
    int last = str.length() - 1;
    for (int i = 0; i<str.length(); i++)
    {
        if (str[i]!= str[last-i])
        {
            found = 1;
            break;
        }
        
    }
    if (found == 0)
    {
        cout<<"It is  palidrome"<<endl;
    }
    else
    {
        cout<<"It is not palindrome"<<endl;
    }
    return 0;
    
}