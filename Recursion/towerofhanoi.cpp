#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>
using namespace std;
void toh(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    toh(n-1,src,helper,dest);
    cout<<"Move disk from "<<src<<"to "<<dest<<endl;
    toh(n-1,helper,dest,src);
   
}
int main()
{ 
 clearerr;
 toh(3,'A','C','B');
 getch();
 return 0;

}