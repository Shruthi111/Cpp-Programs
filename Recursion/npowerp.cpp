// // Recursion method to find n power p
// #include<iostream>
// #include<cmath>
// using namespace std;

// int npowerp(int n,int p)
// {
//     if(p==0)
//     {
//         return 1;
//     }
//    int prevpower=npowerp(n,p-1);
//    return n * prevpower;
// }
// int main()
// {
//     int n,p;
//     cin>>n>>p;
//     cout<<npowerp(n,p);
// return 0;
// }

// General method
#include<iostream>
#include<cmath>
using namespace std;
int npowerp(int n,int p)
{
    int power=1;
    
    for(int i=0;i<p;i++)
    {
        power*=n;
    }
    return power;
}
int main()
{int n,p;
cin>>n>>p;
cout<<npowerp(n,p);
return 0;
}