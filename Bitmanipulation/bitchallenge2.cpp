// To count no of ones in binary representation of a no

#include<iostream>
using namespace std;

int noofones(int n)
{ int i=0;
    while(n!=0)
    {
        n=n & (n-1);
        i++;
    }
    return i;
}

int main()
{
    cout<<noofones(5);
    return 0;
}
