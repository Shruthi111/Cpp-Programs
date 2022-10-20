#include<iostream>
#include<cmath>
using namespace std;

bool sorted(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray=sorted(arr+1,n-1);
    return((arr[0]<arr[1]) && restarray);
}
int main()
{
    int arr[4]={1,2,6,4};
    cout<<sorted(arr,4);
return 0;
}