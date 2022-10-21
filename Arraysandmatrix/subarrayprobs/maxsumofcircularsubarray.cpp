// To find a circular subarray having max sum of all its elements and to print the sum.
// Note:It is circular subarray.It means eg:[1,2,3,4], here [4,1,2,3] is also a subarray
// There are 2 cases:
// 1.No wrapping:eg:[-4,2,3,4,-5] Here no need to wrap the 1st and last ele becoz max subarray is [2,3,4] Non wrapsum
// 2.with wrapsum:[4,-4,3,-3,10,-11,12]
// In this case max subarray will be [12,4,-4,3,-3,10] here wrapsum is req.

// In case 1,directly Kadane's algo can be applied.But in case2 ,first we'll find non contributing elements and subtract them from the total sum.ie maxsum=totalsum-sumofnoncontributing ele

// But hw to find sum of nooncontributing elements?
// wt we do is reverse the sign of array elements and apply kadanes algo.
// And then maxsum=totalsum-(-ans obtained from kadane's algo)

#include <iostream>
#include <climits>
using namespace std;

// Kadane's algo:
int kadane(int a[], int n)
{
    int cursum = 0, maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cursum += a[i];
        if (cursum < 0)
        {
            cursum = 0;
        }
        maxsum = max(maxsum, cursum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int wrapsum = 0, nonwrapsum = 0, totalsum = 0;
    nonwrapsum = kadane(a, n);

    for (int i = 0; i < n; i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }

    int noncontributingelesum = kadane(a, n);
    wrapsum = totalsum + noncontributingelesum;

    int maxsum = max(wrapsum, nonwrapsum);
    cout << maxsum;
    return 0;
}
