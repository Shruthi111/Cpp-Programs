#include<iostream>
#include<cmath>
#include<iomanip>
#include<conio.h>
using namespace std;

int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return(firstocc(arr,n,i+1,key));
}

int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1)
    {
        return restarray;
    }
    if(arr[i]==key)
    {
        return i;
    }
    return -1;
}
int main()
{ 
 clearerr;
int arr[5]={1,2,1,2,1};
//  cout<<firstocc(arr,5,0,1);
cout<<lastocc(arr,5,0,1);
 getch();
 return 0;

}