// To find max and min ele in an array
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    int a[n];
    cout << "Enter the elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max = INT_MIN, min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    cout << max << endl;
    cout << min;

    return 0;
}