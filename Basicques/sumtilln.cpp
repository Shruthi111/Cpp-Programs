// Sum till n
#include <iostream>
using namespace std;

void sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum;
    return;
}

int main()
{
    int n;
    cout << "Enter n\n";
    cin >> n;
    sum(n);
    return 0;
}