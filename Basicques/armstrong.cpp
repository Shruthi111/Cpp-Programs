#include <iostream>
using namespace std;

int main()
{
    int n,d,sum=0,temp;
    cout << "Enter n\n";
    cin >> n;
    temp=n;
    while (n > 0)
    {
        d = n % 10;
        sum=sum+(d*d*d);
        n = n / 10;
    }
    if (sum==temp)
    {
        cout << "Armstrong\n";
    }
    else
    {
        cout << "not Armstrong\n";
    }

    return 0;
}