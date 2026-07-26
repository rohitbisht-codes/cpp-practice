#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter Input: "<<endl;
    getline(cin,str);
    int found =0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]>='0' and str[i]<='9')
        {
            found = 1;
        }
        else
        {
            found =0;
            break;
        }
        
    }
    if (found== 1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    return 0;
}