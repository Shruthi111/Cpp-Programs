#include <iostream>
using namespace std;
int main()

{
    int n;
    bool flag = 1;
    cout << "Enter the no" << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "Neither prime nor composite\n";
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout << "Prime\n";
    else
        cout << "Not prime";

    return 0;
}