// // To find all the subsets of a given set

#include<iostream>
using namespace std;

void subset(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<"\n";
    }
}
int main()
{int arr[4]={1,2,3,4};
    subset(arr,4);

    return 0;
}

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main()
// {
//     int arr[3]={1,2,3},n=3;
//     cout<<" "<<"\n";
//     for(int i=0;i<(pow(2,n));i++)
//     {
//         for(int j=0;j<(pow(2,i));j++)
//         {
            
//             cout<<arr[j]<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }