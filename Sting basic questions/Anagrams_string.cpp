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
    int found = 0;
    for (int i = 0; i < str1.length(); i++)
    {
        int count1 = 0;
        int count2 = 0;
        for (int k = 0; k < str1.length(); k++)
        {
            if (str1[i] == str1[k])
            {
               count1++;
            }
        }    
        for (int r = 0; r < str2.length(); r++)
        {
            if (str1[i]==str2[r])
            {
                
                count2++;
            }
        
        }
        if (count1 != count2)
        {
            found = 0;
            break;
        }
        else{
            found = 1;
        }    
       
    } 
        
    
    if (found == 0)
    {
        cout<<"It is not anagrams"<<endl;
    }
    else{
        cout<<"It is  anagrams"<<endl;
    }
    

}