#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;

void rev(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros=s.substr(1);
    rev(ros);
    cout<<s[0];
}
int main()
{ 
 clearerr;
 rev("shruthi");
 getch();
 return 0;

}