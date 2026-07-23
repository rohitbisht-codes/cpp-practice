#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter Sting: "<<endl;
    getline(cin,str);
    int count = 0;
    for (int i = 0; str[i]!='/0'; i++)
    {
        if (str[i]=='a' || str[i] == 'e' || str[i] == 'i' || str[i] =='o' || str[i] == 'u'
            ||str[i]=='A' || str[i] == 'E' || str[i] == 'I' || str[i] =='O' || str[i] == 'U')
        {
            count ++;
        }
        
    }
    cout<<"The vowels count is: "<<count;
    
}