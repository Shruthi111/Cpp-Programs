#include <iostream>

using namespace std;

int btd(int n)
{
    int ans = 0, x = 1;
    while (n > 0)
    {
        int d = n % 10;
        ans += d * x;
        x *= 2;
        n = n / 10;
    }

    return ans;
}
int dtb(int n)
{
    int rem = 0, i = 1, ans = 0;
    while (n != 0)
    {
        rem = n % 2;
        n = n / 2;
        ans += rem * i;
        i *= 10;
    }

    return ans;
}

int main()
{
    int n1, n2;
    cout << "Enter the 2 binary numbers\n";
    cin >> n1 >> n2;
    int a = btd(n1);
    int b = btd(n2);
    int sum = a + b;
    int add = dtb(sum);
    cout << add;
    return 0;
}

// int reverse(int n)
// {
//     int rev = 0;
//     while (n > 0)
//     {
//         int d = n % 10;
//         rev = rev * 10 + d;
//         n = n / 10;
//     }
//     return rev;
// }
// int add2binary(int n1, int n2)
// {
//     int carry = 0, ans = 0;
//     while (n1 > 0 && n2 > 0)
//     {
//         if (n1 % 2 == 0 && n2 % 2 == 0)
//         {
//             ans = ans * 10 + carry;
//             carry = 0;
//         }
//         else if ((n1 % 2 == 1 && n2 % 2 == 0) || (n1 % 2 == 0 && n2 % 2 == 1))
//         {
//             if (carry == 0)
//             {
//                 ans = ans * 10 + 1;
//                 carry = 0;
//             }
//             else
//             {
//                 ans = ans * 10 + 0;
//                 carry = 1;
//             }
//         }
//         else
//         {
//             ans = ans * 10 + carry;
//             carry = 1;
//         }

//         n1 /= 10;
//         n2 /= 10;
//     }
//     while (n1 > 0)
//     {
//         if (carry == 1)
//         {
//             if (n1 % 2 == 1)
//             {
//                 ans = ans * 10 + 0;
//                 carry = 1;
//             }
//             else
//             {
//                 ans = ans * 10 + 1;
//                 carry = 0;
//             }
//         }
//         else
//         {
//             ans = ans * 10 + (n1 % 2);
//         }
//         n1 /= 10;
//     }
//     while (n2 > 0)
//     {
//         if (carry == 1)
//         {
//             if (n2 % 2 == 1)
//             {
//                 ans = ans * 10 + 0;
//                 carry = 1;
//             }
//             else
//             {
//                 ans = ans * 10 + 1;
//                 carry = 0;
//             }
//         }
//         else
//         {
//             ans = ans * 10 + (n2 % 2);
//         }
//         n2 /= 10;
//     }
//     if (carry == 1)
//     {
//         ans = ans * 10 + 1;
//     }

//     ans = reverse(ans);
//     return ans;
// }
// int main()
// {
//     int n1, n2;
//     cin >> n1 >> n2;
//     cout << add2binary(n1, n2);

//     return 0;
// }