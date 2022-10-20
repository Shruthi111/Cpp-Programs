// // Finding sum till n using recursion:
// #include<iostream>
// #include<cmath>
// using namespace std;

// int sum(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//    int prevsum=sum(n-1);
//    return n + prevsum;
// }
// int main()
// { int n;
//     cin>>n;
//     cout<<sum(n);
// return 0;
// }

// General method
#include<iostream>
#include<cmath>
using namespace std;

int sum(int n)
{ int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{int n;
cin>>n;
    cout<<sum(n);
return 0;
}