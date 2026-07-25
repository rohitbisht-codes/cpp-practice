#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: "<<endl;
    getline(cin,str);
    int maxcount =0;
    char maxchar =0;
    for (int i = 0; i < str.length(); i++)
    {
        int count =0;
        
        for (int j = 0; j < str.length(); j++)
        {
            if (str[i]==str[j])
            {
                count ++;
            }
            
        }
        
          if (count>maxcount)
          {
            maxcount = count;
            maxchar = str[i];
            
          }
          
        }
        cout << maxchar << " " << maxcount;
    

}