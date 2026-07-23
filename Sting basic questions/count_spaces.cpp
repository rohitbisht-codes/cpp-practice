#include<iostream>
#include<string>
using namespace std;
int  main()
{
    string str;
    cout<<"ENTER STRING: "<<endl;
    getline(cin,str);
    int count = 0;
    for (int i = 0;i<str.length(); i++)
    {
        if (str[i]== ' ')
        {
           count++;
        }
        
    }
    count = count+1; 
  cout<<count;


}