#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter String: "<<endl;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        int count = 0;
        int found = 0;

        for (int k = 0; k < i; k++)
        {
          if (str[i]==str[k])
          {
            found = 1;
            break;
          }
        }
        if (found == 1)
        {
           continue;
        }
          
      for (int j = 0; j < str.length(); j++)
        {   
                if (str[i]==str[j])
               {
                  count++;
                  
               }
        }
        
        cout << str[i] << " = " << count << endl;
    }
    
    
    return 0;
}