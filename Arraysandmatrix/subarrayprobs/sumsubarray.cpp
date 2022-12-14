// Maximum sum of elements in a subarray among all subarrays:

// Brute force approach:time complexity-O(n^3)
// #include <iostream>
// #include<climits>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     int  maxsum =INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {int sum = 0;
//             for (int k = i; k <= j; k++)
//             {
//                 sum += a[k];
//             }
//             maxsum=max(maxsum,sum);
//         }
//     }cout<<maxsum;

//     return 0;
// }

//   approach: 0(n^2):

#include <climits>
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxim = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            maxim = max(sum, maxim);
        }
    }
    cout << maxim << endl;

    return 0;
}