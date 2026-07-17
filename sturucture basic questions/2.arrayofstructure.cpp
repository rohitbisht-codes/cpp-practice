#include<iostream>
using namespace std;
struct student
{
    char name[20];
    int rollno;
    float marks;
};
int main()
{
    student s[5];
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter Student Deatil"<<endl;
        cout << "Enter Student " << i + 1 << " Details:\n";
        cin>>s[i].name;
        cin>>s[i].rollno;
        cin>>s[i].marks;
    }
    int max = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s[i].marks>s[max].marks)
        {
            max=i;
            
        }
        
    }
    cout<<"Topper Details: "<<endl;
    cout << s[max].name<<endl;
    cout << s[max].rollno<<endl;
    cout << s[max].marks<<endl;
    return 0;

}
