// Using general method:
// #include<iostream>
// #include<cmath>
// using namespace std;

// int fact(int n)
// {int fact=1;
//     for(int i=1;i<=n;i++)
//     {
//         fact*=i;
//     }return fact;
// }
// int main()
// {int n;
//     cin>>n;
//     cout<<fact(n);
// return 0;
// }

// Using recursion
#include<iostream>
#include<cmath>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
return 0;
}