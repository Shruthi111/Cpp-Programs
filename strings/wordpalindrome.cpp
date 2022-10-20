#include <iostream>

using namespace std;

int main()
{
    int n, flag = 1;
    cin >> n;
    char a[n + 1];
    cin >> a;
    int i = 0;
    while (i < n / 2)
    {
        if (a[i] != a[n - 1 - i])
        {
            flag = 0;
            break;
        }
        i++;
    }

    if (flag == 1)
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}