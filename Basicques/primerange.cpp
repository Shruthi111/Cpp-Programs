// // general method to find prime nos between a and b
// #include<iostream>
// #include<cmath>
// using namespace std;

// bool isprime(int n)
// {
//   for(int i=2;i<n;i++)
//   {
//       if(n%i==0){
//           return 0;
//       }
//   }return 1;
// }
// int main()
// { int a=2,b=15;
//     for(int i=a;i<=b;i++)
//     {
//         if(isprime(i))
//         {
//             cout<<i<<" ";
//         }
//     }
// return 0;
// }


#include<iostream>
#include<cmath>
using namespace std;

void sieveprime(int n)
{
  int arr[100]={0};
  for(int i=2;i<=n;i++)
  {   if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
                {
                    arr[j]=1;
                }
        }
  }
  for(int i=2;i<=n;i++)
  {
      if(arr[i]==0)
      {
          cout<<i<<" ";
      }
  }
}

int main()
{int n=30;
sieveprime(n);
return 0;
}