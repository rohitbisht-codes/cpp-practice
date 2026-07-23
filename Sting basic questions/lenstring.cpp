#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string n;
    cout<<"Enter String: "<<endl;
    getline(cin,n);
    int count = 0;
    for (int i = 0; n[i]!='\0'; i++)
    {
        count++;
    }
    cout<<"Length: "<<count;
    return 0;

}