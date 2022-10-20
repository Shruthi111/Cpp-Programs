#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>
using namespace std;

class student
{
    private:
    string name;
    int age;
    int usn;
    public:
    void getdata()
    {
        // string name;
        // int age,usn;
        cout<<"Enter Your name\n";
        cin>>name;
        cout<<"Enter your age\n";
        cin>>age;
        cout<<"Enter your usn\n";
        cin>>usn;
    }
    void putdata()
    {
        cout<<"Name="<<name<<endl;
        cout<<"Age="<<age<<endl;
        cout<<"USN="<<usn<<endl;
    }

};
int main()
{
    clearerr;
    int n;
    student s[20];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        s[i].getdata();
        s[i].putdata();
    }
    getch();

return 0;
}