#include <iostream>
using namespace std;

int main()
{
    int rev = 0, n, d,temp;
    cout << "Enter n\n";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    if (rev == temp)
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not a palindrome\n";
    }

    return 0;
}