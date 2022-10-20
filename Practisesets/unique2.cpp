// To find 2 unique nos in an array where all the nos except these 2 are repeated

#include<iostream>
#include<cmath>
using namespace std;

int getbit(int n,int pos)
{
    return (n&(1<<pos)!=0);
}

void unique2(int arr[],int n)
    {
        int xorsum=0;
        for(int i=0;i<n;i++)
        {
            xorsum=xorsum ^ arr[i];
        }
        int temp=xorsum;
        int setbit=0;
        int pos;
        while(setbit!=1)
        {
            setbit=xorsum & 1;
            pos++;
            xorsum=xorsum>>1;
        }
        int newxor=0;
        for(int i=0;i<n;i++)
        {
            if(getbit(arr[i],pos-1))
            {
                newxor=newxor ^ arr[i];
            }
        }
        cout<<newxor<<" ";
        cout<<(temp ^ newxor);

    }
int main()
{
    int arr[6]={1,2,3,4,2,1};
    unique2(arr,6);
return 0;
}